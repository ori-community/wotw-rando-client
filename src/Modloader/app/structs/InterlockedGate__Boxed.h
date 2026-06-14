#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterlockedGate__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterlockedGate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterlockedGate__Boxed_DEFINED)
#include <Modloader/app/structs/InterlockedGate.h>
#if defined(IL2CPP_STRUCT_InterlockedGate_DEFINED)
#define IL2CPP_STRUCT_InterlockedGate__Boxed_DEFINED
struct InterlockedGate__Class;
struct InterlockedGate__Boxed {
    struct InterlockedGate__Class* klass;
    MonitorData* monitor;
    struct InterlockedGate fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterlockedGate__Boxed_FWDDECL)
#define IL2CPP_STRUCT_InterlockedGate__Boxed_FWDDECL
#include <Modloader/app/structs/InterlockedGate__Class.h>
#endif
#undef IL2CPP_STRUCT_InterlockedGate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterlockedGate__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_InterlockedGate__Boxed_FWDDECL)
#include <Modloader/app/structs/InterlockedGate__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterlockedGate__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
