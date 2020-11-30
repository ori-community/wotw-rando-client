using System.ComponentModel;
using RandoMainDLL.Memory;
using Newtonsoft.Json;
using System;
namespace RandoMainDLL {

  public class SeedGenSettings {
    [JsonProperty("tps")]
    public Boolean Teleporters { get; set; }
    [JsonProperty("spoilers")]
    public Boolean Spoilers { get; set; }
    [JsonIgnore]
    public Boolean RaceMode { get => !Spoilers; }
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
    [DefaultValue(true)]
    public Boolean NetcodeEnabled { get; set; }
  }
}
