#include <assert.h>

bool bpm_is_ok(float bpm)
{
  if(bpm < 70 || bpm > 150)
      return false;
  else
      return true;
}

bool spo2_is_ok(float spo2)
{
  if(spo2 < 90)
      return false;
  else
      return true;
}

bool respRate_is_ok(float respRate)
{
  if(respRate < 30 || respRate > 95)
      return false;
  else
      return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate)
{
  if(bpm_is_ok(bpm) && spo2_is_ok(spo2) && respRate_is_ok(respRate))
      return true;
  else
      return false;
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
  
}
