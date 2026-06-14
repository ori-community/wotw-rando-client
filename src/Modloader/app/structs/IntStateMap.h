#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntStateMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntStateMap_DEFINED)
#include <Modloader/app/structs/IntStateMap__Fields.h>
#if defined(IL2CPP_STRUCT_IntStateMap__Fields_DEFINED)
#define IL2CPP_STRUCT_IntStateMap_DEFINED
struct IntStateMap__Class;
struct IntStateMap {
    struct IntStateMap__Class* klass;
    MonitorData* monitor;
    struct IntStateMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntStateMap_FWDDECL)
#define IL2CPP_STRUCT_IntStateMap_FWDDECL
#include <Modloader/app/structs/IntStateMap__Class.h>
#endif
#undef IL2CPP_STRUCT_IntStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntStateMap_DEFINED) && !defined(IL2CPP_STRUCT_IntStateMap_FWDDECL)
#include <Modloader/app/structs/IntStateMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntStateMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
