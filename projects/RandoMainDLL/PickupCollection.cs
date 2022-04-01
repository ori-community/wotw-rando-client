using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.Linq;
using System.Text.RegularExpressions;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  using Conditions = SortedDictionary<UberStateCondition, Pickup>;
  using States = Dictionary<UberId, SortedDictionary<UberStateCondition, Pickup>>;

  public class PickupDictionary {
    States UberStatePickups = new States();

    private Conditions GetConditions(UberId id) {
      if (UberStatePickups.TryGetValue(id, out var pickups))
        return pickups;

      var dict = new Conditions();
      UberStatePickups.Add(id, dict);
      return dict;
    }

    public Tuple<UberStateCondition, Pickup> PickupWithCondition(UberId id, double value) {
      var conditions = GetConditions(id);
      foreach (var condition in conditions)
        if (condition.Key.Met(value))
          return Tuple.Create(condition.Key, condition.Value);

      return Tuple.Create<UberStateCondition, Pickup>(null, Multi.Empty);
    }

    public Pickup Pickup(UberId id, double value) {
      return PickupWithCondition(id, value).Item2;
    }

    public void Clear() {
      UberStatePickups.Clear();
    }

    public bool HasPickup(UberId id) {
      return GetConditions(id).Count > 0;
    }

    public bool Collect(UberState state, UberValue value) {
      var collected = false;
      var conditions = GetConditions(state.GetUberId());
      foreach (var condition in conditions)
        if (condition.Key.Met(state, value))
          collected |= condition.Value.Collect(condition.Key);

      return collected;
    }

    public bool Collect(UberStateCondition cond) {
      var collected = false;
      var conditions = GetConditions(cond.Id);
      foreach (var condition in conditions)
        if (condition.Key.Met(cond.Target))
          collected |= condition.Value.Collect(condition.Key);

      return collected;
    }

    public void Add(UberStateCondition condition, Pickup pickup) {
      var conditions = GetConditions(condition.Id);
      var p = conditions.GetOrElse(condition, Multi.Empty);
      conditions.Remove(condition);
      conditions.Add(condition, p.Concat(pickup));
    }

    public int PickupCount(ZoneType type) {
      return UberStatePickups.Aggregate(0, (s, d) => s + d.Value.Count(p => p.Key.Loc().Zone == type));
    }
  }
}
