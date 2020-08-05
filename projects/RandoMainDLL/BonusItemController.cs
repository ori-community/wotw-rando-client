using System.ComponentModel;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum BonusType {
    [Description("Health Regeneration")]
    HealthRegen = 30,
    [Description("Energy Regeneration")]
    EnergyRegen = 31,
    [Description("Extra Double Jump")]
    ExtraDoubleJump = 35,
    [Description("Extra Air Dash")]
    ExtraAirDash = 36
  }

  public static class BonusItemController {
    public static void Refresh() {
      InterOp.refresh_ability_energy_modifiers();
    }
    public static void Update() {
      float h = InterOp.get_uber_state_value(4, (int)BonusType.HealthRegen);
      if (h > 0)
        InterOp.add_health(h * 0.0028f);
      float e = InterOp.get_uber_state_value(4, (int)BonusType.EnergyRegen);
      if (e > 0)
        InterOp.add_energy(e * 0.00028f);
    }

    public static void OnUberState(UberState state) {
      // If weapon upgrade, refresh.
      if (state.GroupID == 4)
        Refresh();
    }
  }
}
