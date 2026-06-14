#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoolStateMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoolStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolStateMap_DEFINED)
#include <Modloader/app/structs/BoolStateMap__Fields.h>
#if defined(IL2CPP_STRUCT_BoolStateMap__Fields_DEFINED)
#define IL2CPP_STRUCT_BoolStateMap_DEFINED
struct BoolStateMap__Class;
struct BoolStateMap {
    struct BoolStateMap__Class* klass;
    MonitorData* monitor;
    struct BoolStateMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoolStateMap_FWDDECL)
#define IL2CPP_STRUCT_BoolStateMap_FWDDECL
#include <Modloader/app/structs/BoolStateMap__Class.h>
#endif
#undef IL2CPP_STRUCT_BoolStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolStateMap_DEFINED) && !defined(IL2CPP_STRUCT_BoolStateMap_FWDDECL)
#include <Modloader/app/structs/BoolStateMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoolStateMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
