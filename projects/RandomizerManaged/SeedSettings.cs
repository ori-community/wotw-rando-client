using System.ComponentModel;
using RandomizerManaged.Memory;
using Newtonsoft.Json;
using System;
namespace RandomizerManaged {

  public class SeedGenSettings {
    [JsonProperty("race")]
    public bool RaceMode { get; set; }
    [JsonProperty("disableLogicFilter")]
    public bool DisableLogicFilter { get; set; }
    [JsonProperty("online")]
    public bool NetcodeEnabled { get; set; }
  }
}
