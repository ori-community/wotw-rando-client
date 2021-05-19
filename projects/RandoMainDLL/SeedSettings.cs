using System.ComponentModel;
using RandoMainDLL.Memory;
using Newtonsoft.Json;
using System;
namespace RandoMainDLL {

  public class SeedGenSettings {
    [JsonIgnore]
    private static Version rustGenVersion = new Version("0.13.0");
    [JsonProperty("spoilers")]
    public Boolean Spoilers { get; set; }
    [JsonIgnore]
    public Boolean RaceMode { get => !Spoilers; }
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
    public Boolean NetcodeEnabled { get; set; }
  }
}
