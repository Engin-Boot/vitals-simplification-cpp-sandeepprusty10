#include <assert.h>

bool vitalIsInLimits(float value, float lowerLimit, float upperLimit)
{
  return(value >= lowerLimit && value <= upperLimit);
}

bool vitalsAreOk(float bpm, float spo2, float respRate)
{
  return(vitalIsInLimits(bpm, 70, 150) && vitalIsInLimits(spo2, 90, 100) && vitalIsInLimits(respRate, 30, 95));
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
  
  assert(vitalIsInLimits(60,70,150) == false);
  assert(vitalIsInLimits(90,70,150) == true);
  assert(vitalIsInLimits(180,70,150) == false);
}
