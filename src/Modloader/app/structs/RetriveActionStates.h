#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RetriveActionStates_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RetriveActionStates_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetriveActionStates_DEFINED)
#include <Modloader/app/structs/RetriveActionStates__Fields.h>
#if defined(IL2CPP_STRUCT_RetriveActionStates__Fields_DEFINED)
#define IL2CPP_STRUCT_RetriveActionStates_DEFINED
struct RetriveActionStates__Class;
struct RetriveActionStates {
    struct RetriveActionStates__Class* klass;
    MonitorData* monitor;
    struct RetriveActionStates__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RetriveActionStates_FWDDECL)
#define IL2CPP_STRUCT_RetriveActionStates_FWDDECL
#include <Modloader/app/structs/RetriveActionStates__Class.h>
#endif
#undef IL2CPP_STRUCT_RetriveActionStates_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetriveActionStates_DEFINED) && !defined(IL2CPP_STRUCT_RetriveActionStates_FWDDECL)
#include <Modloader/app/structs/RetriveActionStates.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RetriveActionStates.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
