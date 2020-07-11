using System.ComponentModel;

namespace RandoMainDLL {
  public enum BonusType : byte {
    [Description("Health Regeneration")]
    HealthRegen = 0,
    [Description("Energy Regeneration")]
    EnergyRegen = 1,
    [Description("Extra Double Jump")]
    ExtraDoubleJump = 2,
    [Description("Extra Air Dash")]
    ExtraAirDash = 3
  }

  public static class BonusItemController {
    public static void Update() {
      int h = BonusType.HealthRegen.Count();
      if (h > 0)
        InterOp.add_health(h * 0.00224f);
      int e = BonusType.EnergyRegen.Count();
      if (e > 0)
        InterOp.add_energy(e * 0.000224f);
    }
    public static int Count(this BonusType b) => SaveController.Data?.BonusItems?.GetOrElse(b, 0) ?? 0;
  }
}
