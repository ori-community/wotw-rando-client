using System;
using Newtonsoft.Json;
using System.IO;
using System.Collections.Generic;

namespace RVAUpdater {
    class Program {
        static Dictionary<String, UInt64> dumpRVAs = new Dictionary<string, ulong>();
        static Dictionary<UInt64, UInt64> RvaUpdateMap = new Dictionary<UInt64, UInt64>();
        static void Main(string[] args) {
            Console.WriteLine("Hello World!");
            var oldDump = RVAFinder.getFullDump(RVAFinder.oldDumpFile);
            var newDump = RVAFinder.getFullDump(RVAFinder.newDumpFile);

            foreach (var method in oldDump.ScriptMethod) 
                dumpRVAs[method.Signature] = method.Address;
            Console.WriteLine("Finished reading old dump");
            
            foreach (var method in newDump.ScriptMethod)
                if(dumpRVAs.ContainsKey(method.Signature))
                    RvaUpdateMap[dumpRVAs[method.Signature]] = method.Address;
            Console.WriteLine("Finished reading new dump");

            var target = args.Length > 0 ? args[0] : @"C:\moon\dllmain.cpp";
            var text = File.ReadAllText(target);
            foreach (var RVAPair in RvaUpdateMap) {
                if (text.Contains($"{RVAPair.Key}")) {
                    text = text.Replace($"{RVAPair.Key}", $"{RVAPair.Value}");
                    Console.WriteLine($"{RVAPair.Key} => {RVAPair.Value}");
                }
            }
            File.WriteAllText($"{target}.swap", text);

        }
        public static class RVAFinder {
            public static string oldDumpFile = @"C:\moon\script.old.json";
            public static string newDumpFile = @"C:\moon\script.new.json";
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

            public static FullDump getFullDump(string dumpFile) {
                FullDump dump;
                using (var sr = new StreamReader(dumpFile))
                using (JsonReader reader = new JsonTextReader(sr)) {
                    var serializer = new JsonSerializer();
                    dump = serializer.Deserialize<FullDump>(reader);
                }
                return dump;
            }
        }
    }
}
