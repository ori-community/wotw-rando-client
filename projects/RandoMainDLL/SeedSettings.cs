using System.ComponentModel;
using RandoMainDLL.Memory;
using Newtonsoft.Json;
using System;
namespace RandoMainDLL {

  public class SeedGenSettings {
    [JsonIgnore]
    private static Version rustGenVersion = new Version("0.13.0");
    [JsonProperty("race")]
    public bool RaceMode { get; set; }
    [JsonProperty("disableLogicFilter")]
    public bool DisableLogicFilter { get; set; }
    [JsonProperty("version")]
    private string version { get; set; } = "0.0.0";
    [JsonIgnore]
    public Version Version {
      get {
        return new Version(version);
      }
    }
    [JsonIgnore]
    public bool LegacySeedgen => false;
    [JsonProperty("webConn")]
    public bool NetcodeEnabled { get; set; }
  }
}
