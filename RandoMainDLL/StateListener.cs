using System;
using System.Collections.Generic;
using System.Linq;
using RandoMainDLL.Memory;
namespace RandoMainDLL
{
    public static class StateListener {
        public static Dictionary<long, UberState> UberStates = new Dictionary<long, UberState>();
        public static void Update(bool NewGameInit = false) {
            var memory = Randomizer.Memory;
            Dictionary<long, UberState> uberStates = memory.GetUberStates();
            foreach (KeyValuePair<long, UberState> pair in uberStates) {
                long key = pair.Key;
                UberState state = pair.Value;
                if (state.GroupName == "statsUberStateGroup" || (state.GroupName == "achievementsGroup" && state.Name == "spiritLightGainedCounter"))
                    continue;
                if (UberStates.TryGetValue(key, out UberState oldState)) {
                    UberValue value = state.Value;
                    UberValue oldValue = oldState.Value;
                    if (value.Int != oldValue.Int) {
                        var pos = Randomizer.Memory.Position();
                        if(Ready) {
                            if (value.Int > 0) {
                                SeedController.OnUberState(state);
                                if (!Randomizer.PleaseSave)
                                    Randomizer.Log($"Potential pickup: {state.GroupName}.{state.Name} ({state.GroupID}, {state.ID}) at ({Math.Round(pos.X)},{Math.Round(pos.Y)}) {value.Int}", false);
                            } else
                                Randomizer.Log($"State change {state.GroupName}.{state.Name} ({state.GroupID}, {state.ID}) at ({Math.Round(pos.X)},{Math.Round(pos.Y)}): {oldValue.Int}->{value.Int}", false);
                        }
                        UberStates[key].Value = state.Value;
                    }
                } else {
                    UberStates[key] = state.Clone();
                }
            }
            if (!NewGameInit)
                Ready = true;
        }
        public static bool Ready = false;
    }
}