using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
namespace RandoMainDLL.Il2Cpp {
    public abstract class Il2CppData : BinaryStream {
        private Il2CppMetadataRegistration pMetadataRegistration;
        private Il2CppCodeRegistration pCodeRegistration;
        public ulong[] methodPointers;
        public ulong[] genericMethodPointers;
        public ulong[] invokerPointers;
        public ulong[] customAttributeGenerators;
        public ulong[] reversePInvokeWrappers;
        public ulong[] unresolvedVirtualCallPointers;
        private ulong[] fieldOffsets;
        public Il2CppType[] types;
        private Dictionary<ulong, Il2CppType> typeDic = new Dictionary<ulong, Il2CppType>();
        public ulong[] metadataUsages;
        private Il2CppGenericMethodFunctionsDefinitions[] genericMethodTable;
        public Il2CppGenericInst[] genericInsts;
        public Il2CppMethodSpec[] methodSpecs;
        private Dictionary<int, ulong> genericMethoddDictionary;
        private bool fieldOffsetsArePointers;
        protected long maxMetadataUsages;
        public ulong[][] codeGenModuleMethodPointers;

        public abstract ulong MapVATR(ulong uiAddr);
        public abstract bool Search();
        public abstract bool PlusSearch(int methodCount, int typeDefinitionsCount);
        public abstract bool SymbolSearch();

        protected Il2CppData(Stream stream, float version, long maxMetadataUsages) : base(stream) {
            Version = version;
            this.maxMetadataUsages = maxMetadataUsages;
        }

        protected bool AutoInit(ulong codeRegistration, ulong metadataRegistration) {
            //Console.WriteLine("CodeRegistration : {0:x}", codeRegistration);
            //Console.WriteLine("MetadataRegistration : {0:x}", metadataRegistration);
            if (codeRegistration != 0 && metadataRegistration != 0) {
                Init(codeRegistration, metadataRegistration);
                return true;
            }
            return false;
        }

        public virtual void Init(ulong codeRegistration, ulong metadataRegistration) {
            pCodeRegistration = MapVATR<Il2CppCodeRegistration>(codeRegistration);
            pMetadataRegistration = MapVATR<Il2CppMetadataRegistration>(metadataRegistration);
            genericMethodPointers = MapVATR<ulong>(pCodeRegistration.genericMethodPointers, pCodeRegistration.genericMethodPointersCount);
            invokerPointers = MapVATR<ulong>(pCodeRegistration.invokerPointers, pCodeRegistration.invokerPointersCount);
            customAttributeGenerators = MapVATR<ulong>(pCodeRegistration.customAttributeGenerators, pCodeRegistration.customAttributeCount);
            if (Version > 16) {
                metadataUsages = MapVATR<ulong>(pMetadataRegistration.metadataUsages, maxMetadataUsages);
            }
            if (Version >= 22) {
                reversePInvokeWrappers = MapVATR<ulong>(pCodeRegistration.reversePInvokeWrappers, pCodeRegistration.reversePInvokeWrapperCount);
                unresolvedVirtualCallPointers = MapVATR<ulong>(pCodeRegistration.unresolvedVirtualCallPointers, pCodeRegistration.unresolvedVirtualCallCount);
            }
            genericInsts = Array.ConvertAll(MapVATR<ulong>(pMetadataRegistration.genericInsts, pMetadataRegistration.genericInstsCount), x => MapVATR<Il2CppGenericInst>(x));
            fieldOffsetsArePointers = Version > 21;
            if (Version == 21) {
                var fieldTest = MapVATR<uint>(pMetadataRegistration.fieldOffsets, 6);
                fieldOffsetsArePointers = fieldTest[0] == 0 && fieldTest[1] == 0 && fieldTest[2] == 0 && fieldTest[3] == 0 && fieldTest[4] == 0 && fieldTest[5] > 0;
            }
            if (fieldOffsetsArePointers) {
                fieldOffsets = MapVATR<ulong>(pMetadataRegistration.fieldOffsets, pMetadataRegistration.fieldOffsetsCount);
            } else {
                fieldOffsets = Array.ConvertAll(MapVATR<uint>(pMetadataRegistration.fieldOffsets, pMetadataRegistration.fieldOffsetsCount), x => (ulong)x);
            }
            var pTypes = MapVATR<ulong>(pMetadataRegistration.types, pMetadataRegistration.typesCount);
            types = new Il2CppType[pMetadataRegistration.typesCount];
            for (var i = 0; i < pMetadataRegistration.typesCount; ++i) {
                types[i] = MapVATR<Il2CppType>(pTypes[i]);
                types[i].Init();
                typeDic.Add(pTypes[i], types[i]);
            }
            methodPointers = MapVATR<ulong>(pCodeRegistration.methodPointers, pCodeRegistration.methodPointersCount);
            genericMethodTable = MapVATR<Il2CppGenericMethodFunctionsDefinitions>(pMetadataRegistration.genericMethodTable, pMetadataRegistration.genericMethodTableCount);
            methodSpecs = MapVATR<Il2CppMethodSpec>(pMetadataRegistration.methodSpecs, pMetadataRegistration.methodSpecsCount);
            genericMethoddDictionary = new Dictionary<int, ulong>(genericMethodTable.Length);
            foreach (var table in genericMethodTable) {
                var index = methodSpecs[table.genericMethodIndex].methodDefinitionIndex;
                if (!genericMethoddDictionary.ContainsKey(index)) {
                    genericMethoddDictionary.Add(index, genericMethodPointers[table.indices.methodIndex]);
                }
            }
        }

        public T MapVATR<T>(ulong addr) where T : struct {
            if (!ReadClassCache<T>.TryGetValue(addr, out var value)) {
                value = ReadClass<T>(MapVATR(addr));
                ReadClassCache<T>.Add(addr, value);
            }
            return value;
        }

        public T[] MapVATR<T>(ulong addr, long count) where T : struct {
            return ReadClassArray<T>(MapVATR(addr), count);
        }

        public int GetFieldOffsetFromIndex(int typeIndex, int fieldIndexInType, int fieldIndex, bool isValueType, bool isStatic) {
            try {
                var offset = -1;
                if (fieldOffsetsArePointers) {
                    var ptr = fieldOffsets[typeIndex];
                    if (ptr > 0) {
                        Position = MapVATR(ptr) + 4ul * (ulong)fieldIndexInType;
                        offset = ReadInt32();
                    }
                } else {
                    offset = (int)fieldOffsets[fieldIndex];
                }
                if (offset > 0) {
                    if (isValueType && !isStatic) {
                        if (Is32Bit) {
                            offset -= 8;
                        } else {
                            offset -= 16;
                        }
                    }
                }
                return offset;
            } catch {
                return -1;
            }
        }

        public Il2CppType GetIl2CppType(ulong pointer) {
            return typeDic[pointer];
        }

        public ulong GetMethodPointer(int methodIndex, int methodDefinitionIndex, int imageIndex, uint methodToken) {
            if (Version >= 24.2f) {
                if (genericMethoddDictionary.TryGetValue(methodDefinitionIndex, out var methodPointer)) {
                    return methodPointer;
                } else {
                    var ptrs = codeGenModuleMethodPointers[imageIndex];
                    var methodPointerIndex = methodToken & 0x00FFFFFFu;
                    return ptrs[methodPointerIndex - 1];
                }
            } else {
                if (methodIndex >= 0) {
                    return methodPointers[methodIndex];
                }
                genericMethoddDictionary.TryGetValue(methodDefinitionIndex, out var methodPointer);
                return methodPointer;
            }
        }

        public virtual ulong GetRVA(ulong pointer) {
            return pointer;
        }
    }
    public static class HexExtensions {
        public static string HexToBin(this byte b) {
            return Convert.ToString(b, 2).PadLeft(8, '0');
        }

        public static string HexToBin(this byte[] bytes) {
            var result = new StringBuilder(bytes.Length * 8);
            foreach (var b in bytes) {
                result.Append(b.HexToBin());
            }
            return result.ToString();
        }
    }
    public static class BoyerMooreHorspool {
        public static IEnumerable<int> Search(this byte[] source, byte[] pattern) {
            if (source == null) {
                throw new ArgumentNullException(nameof(source));
            }

            if (pattern == null) {
                throw new ArgumentNullException(nameof(pattern));
            }

            int valueLength = source.Length;
            int patternLength = pattern.Length;

            if (valueLength == 0 || patternLength == 0 || patternLength > valueLength) {
                yield break;
            }

            var badCharacters = new int[256];

            for (var i = 0; i < 256; i++) {
                badCharacters[i] = patternLength;
            }

            var lastPatternByte = patternLength - 1;

            for (int i = 0; i < lastPatternByte; i++) {
                badCharacters[pattern[i]] = lastPatternByte - i;
            }

            int index = 0;

            while (index <= valueLength - patternLength) {
                for (var i = lastPatternByte; source[index + i] == pattern[i]; i--) {
                    if (i == 0) {
                        yield return index;
                        break;
                    }
                }

                index += badCharacters[source[index + lastPatternByte]];
            }
        }

        public static IEnumerable<int> Search(this byte[] source, string stringPattern) {
            if (source == null) {
                throw new ArgumentNullException(nameof(source));
            }

            if (stringPattern == null) {
                throw new ArgumentNullException(nameof(stringPattern));
            }

            var pattern = stringPattern.Split(' ');

            int valueLength = source.Length;
            int patternLength = pattern.Length;

            if (valueLength == 0 || patternLength == 0 || patternLength > valueLength) {
                yield break;
            }

            var badCharacters = new int[256];

            for (var i = 0; i < 256; i++) {
                badCharacters[i] = patternLength;
            }

            var lastPatternByte = patternLength - 1;

            for (int i = 0; i < lastPatternByte; i++) {
                if (pattern[i] != "?") {
                    var result = Convert.ToInt32(pattern[i], 16);
                    badCharacters[result] = lastPatternByte - i;
                }
            }

            int index = 0;

            while (index <= valueLength - patternLength) {
                for (var i = lastPatternByte; CheckEqual(source, pattern, index, i); i--) {
                    if (i == 0) {
                        yield return index;
                        break;
                    }
                }

                index += badCharacters[source[index + lastPatternByte]];
            }
        }

        private static bool CheckEqual(byte[] source, string[] pattern, int index, int i) {
            if (pattern[i] != "?") {
                var result = Convert.ToInt32(pattern[i], 16);
                return source[index + i] == result;
            }
            return true;
        }
    }
}