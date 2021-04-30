using System.ComponentModel;
using RandoMainDLL.Memory;
using Newtonsoft.Json;
using System;
namespace RandoMainDLL {

  public class SeedGenSettings {
    [JsonIgnore]
    private static Version rustGenVersion = new Version("0.13.0");
    [JsonProperty("tps")]
    public Boolean Teleporters { get; set; }
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
    [JsonProperty("unsafePaths")]
    public Boolean UnsafePaths { get; set; }
    [JsonProperty("gorlekPaths")]
    public Boolean GorlekPaths { get; set; }
    [JsonProperty("glitchPaths")]
    public Boolean GlitchPaths { get; set; }
    [JsonProperty("questLocs")]
    public Boolean ItemsOnQuests { get; set; }
    [JsonProperty("bonusItems")]
    public Boolean BonusItems { get; set; }
    [JsonProperty("randomSpawn")]
    public Boolean RandomSpawn { get; set; }
    [JsonProperty("webConn")]
    public Boolean NetcodeEnabled { get; set; }
  }
}
