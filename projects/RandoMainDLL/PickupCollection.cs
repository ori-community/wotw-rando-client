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
    // Optimize the equals pickup as we only match one of those on collection.
    Dictionary<UberStateCondition, Pickup> UberStateEqualsPickups = new Dictionary<UberStateCondition, Pickup>();
    States UberStatePickups = new States();

    private Conditions GetConditions(UberId id) {
      if (UberStatePickups.TryGetValue(id, out var pickups))
        return pickups;

      var dict = new Conditions();
      UberStatePickups.Add(id, dict);
      return dict;
    }

    private Tuple<UberStateCondition, Pickup> GetEqCondition(UberId id, double value) {
      var cond = new UberStateCondition(id, (int)value, UberStateCondition.Handler.Equals);
      return Tuple.Create(cond, UberStateEqualsPickups.GetOrElse(cond, null));
    }

    private Tuple<UberStateCondition, Pickup> GetEqCondition(UberState state) {
      var cond = new UberStateCondition(state.GroupID, state.ID, state.ValueAsInt(), UberStateCondition.Handler.Equals);
      return Tuple.Create(cond, UberStateEqualsPickups.GetOrElse(cond, null));
    }

    public Tuple<UberStateCondition, Pickup> PickupWithCondition(UberId id, double value) {
      var conditions = GetConditions(id);
      foreach (var condition in conditions)
        if (condition.Key.Met(value))
          return Tuple.Create(condition.Key, condition.Value);

      var eq = GetEqCondition(id, value);
      if (eq.Item2 != null)
        return eq;

      return Tuple.Create<UberStateCondition, Pickup>(null, Multi.Empty);
    }

    public Pickup Pickup(UberStateCondition cond) {
      if (cond.TargetHandler == UberStateCondition.Handler.Equals)
        return UberStateEqualsPickups.GetOrElse(cond, Multi.Empty);
      else
        return UberStatePickups.GetOrElse(cond.Id, null).GetOrElse(cond, Multi.Empty);
    }

    public Pickup Pickup(UberId id, double value) {
      return PickupWithCondition(id, value).Item2;
    }

    public void Clear() {
      UberStateEqualsPickups.Clear();
      UberStatePickups.Clear();
    }

    public bool HasPickup(UberId id, double value) {
      return PickupWithCondition(id, value).Item1 != null;
    }

    public bool Collect(UberState state, UberValue value) {
      var collected = false;
      var conditions = GetConditions(state.GetUberId());
      foreach (var condition in conditions)
        if (condition.Key.Met(state, value))
          collected |= condition.Value.Collect(condition.Key);

      var eq = GetEqCondition(state);
      if (eq.Item2 != null)
        collected |= eq.Item2.Collect(eq.Item1);

      return collected;
    }

    public void Add(UberStateCondition condition, Pickup pickup) {
      if (condition.TargetHandler == UberStateCondition.Handler.Equals) {
        var p = UberStateEqualsPickups.GetOrElse(condition, Multi.Empty);
        UberStateEqualsPickups.Remove(condition);
        UberStateEqualsPickups.Add(condition, p.Concat(pickup));
      }
      else {
        var conditions = GetConditions(condition.Id);
        var p = conditions.GetOrElse(condition, Multi.Empty);
        conditions.Remove(condition);
        conditions.Add(condition, p.Concat(pickup));
      }
    }

    public int PickupCount(ZoneType type) {
      return UberStatePickups.Aggregate(0, (s, d) => s + d.Value.Count(p => p.Key.Loc().Zone == type))
        + UberStateEqualsPickups.Count(p => p.Key.Loc().Zone == type);
    }
  }
}
