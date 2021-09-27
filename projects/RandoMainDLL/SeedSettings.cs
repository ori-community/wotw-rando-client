using System.ComponentModel;
using RandoMainDLL.Memory;
using Newtonsoft.Json;
using System;
namespace RandoMainDLL {

  public class SeedGenSettings {
    [JsonIgnore]
    private static Version rustGenVersion = new Version("0.13.0");
    [JsonProperty("spoilers")]
    public bool Spoilers { get; set; }
    [JsonProperty("enableLogicFilter")]
    public bool EnableLogicFilter { get; set; }
    [JsonIgnore]
    public bool RaceMode { get => !Spoilers; }
    [JsonProperty("version")]
    private string version { get; set; } = "0.0.0";
    [JsonIgnore]
    public Version Version {
      get {
        return new Version(version);
      }
    }
    [JsonIgnore]
    public bool LegacySeedgen => 0 > Version.CompareTo(rustGenVersion);
    [JsonProperty("webConn")]
    public bool NetcodeEnabled { get; set; }
  }
}
