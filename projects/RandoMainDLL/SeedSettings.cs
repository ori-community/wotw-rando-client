using System.ComponentModel;
using RandoMainDLL.Memory;
using Newtonsoft.Json;
using System;
namespace RandoMainDLL {

  public class SeedGenSettings {
    [JsonProperty("race")]
    public bool RaceMode { get; set; }
    [JsonProperty("logicMap")]
    public bool LogicMap { get; set; }
    [JsonProperty("online")]
    public bool NetcodeEnabled { get; set; }
  }
}
