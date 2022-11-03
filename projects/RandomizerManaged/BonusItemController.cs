using System;
using System.ComponentModel;
using RandomizerManaged.Memory;

namespace RandomizerManaged {
  public enum BonusType {
    [Description("Relic")]
    Relic = 20,
    [Description("Health Regeneration")]
    HealthRegen = 30,
    [Description("Energy Regeneration")]
    EnergyRegen = 31,
    [Description("Extra Double Jump")]
    ExtraDoubleJump = 35,
    [Description("Extra Air Dash")]
    ExtraAirDash = 36,
  }

  public static class BonusItemController {
    public static void Refresh() {
      InterOp.Ability.refresh_ability_energy_modifiers();
    }
    public static void FixedUpdate() {
      double h = UberGet.AsDouble(4, (int)BonusType.HealthRegen);
      if (h > 0)
        InterOp.Player.add_health(Convert.ToSingle(h * 0.0028f));
      double e = UberGet.AsDouble(4, (int)BonusType.EnergyRegen);
      if (e > 0)
        InterOp.Player.add_energy(Convert.ToSingle(e * 0.00028f));
    }

    public static void OnUberState(UberState uber_state) {
      // If weapon upgrade, refresh.
      if (uber_state.GroupID == 4)
        Refresh();
    }
  }
}
