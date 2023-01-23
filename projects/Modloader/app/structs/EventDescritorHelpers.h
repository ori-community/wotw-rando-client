#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDescritorHelpers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDescritorHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescritorHelpers_DEFINED)
#define IL2CPP_STRUCT_EventDescritorHelpers_DEFINED
struct EventDescritorHelpers__Class;
struct EventDescritorHelpers {
    struct EventDescritorHelpers__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EventDescritorHelpers_FWDDECL)
#define IL2CPP_STRUCT_EventDescritorHelpers_FWDDECL
#include <Modloader/app/structs/EventDescritorHelpers__Class.h>
#endif
#undef IL2CPP_STRUCT_EventDescritorHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescritorHelpers_DEFINED) && !defined(IL2CPP_STRUCT_EventDescritorHelpers_FWDDECL)
#include <Modloader/app/structs/EventDescritorHelpers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDescritorHelpers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
