#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryObjectWithMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryObjectWithMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMap_DEFINED)
#include <Modloader/app/structs/BinaryObjectWithMap__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryObjectWithMap__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryObjectWithMap_DEFINED
struct BinaryObjectWithMap__Class;
struct BinaryObjectWithMap {
    struct BinaryObjectWithMap__Class* klass;
    MonitorData* monitor;
    struct BinaryObjectWithMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMap_FWDDECL)
#define IL2CPP_STRUCT_BinaryObjectWithMap_FWDDECL
#include <Modloader/app/structs/BinaryObjectWithMap__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryObjectWithMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMap_DEFINED) && !defined(IL2CPP_STRUCT_BinaryObjectWithMap_FWDDECL)
#include <Modloader/app/structs/BinaryObjectWithMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryObjectWithMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
