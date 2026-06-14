#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityEvent_DEFINED)
#include <Modloader/app/structs/UnityEvent__Fields.h>
#if defined(IL2CPP_STRUCT_UnityEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityEvent_DEFINED
struct UnityEvent__Class;
struct UnityEvent {
    struct UnityEvent__Class* klass;
    MonitorData* monitor;
    struct UnityEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityEvent_FWDDECL)
#define IL2CPP_STRUCT_UnityEvent_FWDDECL
#include <Modloader/app/structs/UnityEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityEvent_DEFINED) && !defined(IL2CPP_STRUCT_UnityEvent_FWDDECL)
#include <Modloader/app/structs/UnityEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
