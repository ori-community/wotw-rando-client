using System;
using System.IO;
using Newtonsoft.Json;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RandoMainDLL {
  public static class RVAFinder {
    public static string targetsFile { get { return Randomizer.BasePath + "methodRVAs.json"; } }
    public static string dumpFile { get { return Randomizer.BasePath + "script.json"; } }
    public class DumpMethod {
      public UInt64 Address;
      public String Name;
      public String Signature;
    }

    public class DumpMetaMethod {
      public UInt64 Address;
      public String Name;
      public UInt64 MethodAddress;
    }

    public class DumpString {
      public UInt64 Address;
      public String Value;
    }

    public class FullDump {
      public IList<DumpMethod> ScriptMethod;
      public IList<DumpString> ScriptString;
      public IList<DumpMethod> ScriptMetdata;
      public IList<DumpMetaMethod> ScriptMetadataMethod;
      public IList<UInt64> Addresses;
    }

    static Dictionary<String, UInt64> dumpRVAs = new Dictionary<string, ulong>();
    static Dictionary<String, UInt64> relevantRVAs = new Dictionary<string, ulong>();
    static bool needWrite = false;

    public static void Init() {
      try {
        if (File.Exists(targetsFile))
          using (var sr = new StreamReader(targetsFile))
          using (JsonReader reader = new JsonTextReader(sr)) {
            var serializer = new JsonSerializer();
            relevantRVAs = serializer.Deserialize<Dictionary<String, UInt64>>(reader);
          }
      } catch(Exception e) { Randomizer.Error("RVAFinder.Init", e); }
    }

    public static void Update() {
      try {
        if (needWrite) {
          if (File.Exists(targetsFile)) {
            File.Delete(targetsFile);
          }
          using (var sw = new StreamWriter(targetsFile))
          using (JsonWriter writer = new JsonTextWriter(sw)) {
            writer.Formatting = Formatting.Indented;
            var serializer = new JsonSerializer();
            serializer.Serialize(writer, relevantRVAs);
          }
          needWrite = false;
        }
      }
      catch (Exception e) { Randomizer.Error("RVAFinder.Update", e); }
    }

    public static void populateAllRVAs() {
      FullDump dump;
        using (var sr = new StreamReader(dumpFile))
        using (JsonReader reader = new JsonTextReader(sr)) {
          var serializer = new JsonSerializer();
          dump = serializer.Deserialize<FullDump>(reader);
        }
      foreach(var method in dump.ScriptMethod) {
        dumpRVAs[method.Signature] = method.Address;
      }
    }

    public static ulong rvaLookup(string sig, bool fromDump = false) {
      if (fromDump) {
        if (dumpRVAs.Count == 0) {
          populateAllRVAs();
          relevantRVAs.Clear();
        }
        if(dumpRVAs.ContainsKey(sig)) {
          relevantRVAs[sig] = dumpRVAs[sig];
          needWrite = true;
        }
      }
      if (!relevantRVAs.ContainsKey(sig)) {
        Randomizer.Error("rvaLookup", new Exception($"Address not found for {sig}"));
        return 0;
      }
      return relevantRVAs[sig];
    }

  }
}
