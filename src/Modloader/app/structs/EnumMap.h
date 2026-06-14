#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMap_DEFINED)
#include <Modloader/app/structs/EnumMap__Fields.h>
#if defined(IL2CPP_STRUCT_EnumMap__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumMap_DEFINED
struct EnumMap__Class;
struct EnumMap {
    struct EnumMap__Class* klass;
    MonitorData* monitor;
    struct EnumMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnumMap_FWDDECL)
#define IL2CPP_STRUCT_EnumMap_FWDDECL
#include <Modloader/app/structs/EnumMap__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMap_DEFINED) && !defined(IL2CPP_STRUCT_EnumMap_FWDDECL)
#include <Modloader/app/structs/EnumMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
