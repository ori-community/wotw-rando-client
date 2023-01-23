#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceReader__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceReader__Fields_DEFINED
struct BinaryReader;
struct Dictionary_2_System_String_System_Resources_ResourceLocator_;
struct Int32__Array;
struct RuntimeType__Array;
struct BinaryFormatter;
struct UnmanagedMemoryStream;
struct __declspec(align(8)) ResourceReader__Fields {
    struct BinaryReader* _store;
    struct Dictionary_2_System_String_System_Resources_ResourceLocator_* _resCache;
    int64_t _nameSectionOffset;
    int64_t _dataSectionOffset;
    struct Int32__Array* _nameHashes;
    int32_t* _nameHashesPtr;
    struct Int32__Array* _namePositions;
    int32_t* _namePositionsPtr;
    struct RuntimeType__Array* _typeTable;
    struct Int32__Array* _typeNamePositions;
    struct BinaryFormatter* _objFormatter;
    int32_t _numResources;
    struct UnmanagedMemoryStream* _ums;
    int32_t _version;
};
#endif
#if !defined(IL2CPP_STRUCT_ResourceReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_ResourceReader__Fields_FWDDECL
#include <Modloader/app/structs/BinaryFormatter.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceLocator_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/RuntimeType__Array.h>
#include <Modloader/app/structs/UnmanagedMemoryStream.h>
#endif
#undef IL2CPP_STRUCT_ResourceReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ResourceReader__Fields_FWDDECL)
#include <Modloader/app/structs/ResourceReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
