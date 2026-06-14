#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMap_DEFINED)
#include <Modloader/app/structs/StateMap__Fields.h>
#if defined(IL2CPP_STRUCT_StateMap__Fields_DEFINED)
#define IL2CPP_STRUCT_StateMap_DEFINED
struct StateMap__Class;
struct StateMap {
    struct StateMap__Class* klass;
    MonitorData* monitor;
    struct StateMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateMap_FWDDECL)
#define IL2CPP_STRUCT_StateMap_FWDDECL
#include <Modloader/app/structs/StateMap__Class.h>
#endif
#undef IL2CPP_STRUCT_StateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMap_DEFINED) && !defined(IL2CPP_STRUCT_StateMap_FWDDECL)
#include <Modloader/app/structs/StateMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
