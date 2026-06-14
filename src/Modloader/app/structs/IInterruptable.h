#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInterruptable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInterruptable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInterruptable_DEFINED)
#define IL2CPP_STRUCT_IInterruptable_DEFINED
struct IInterruptable__Class;
struct IInterruptable {
    struct IInterruptable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInterruptable_FWDDECL)
#define IL2CPP_STRUCT_IInterruptable_FWDDECL
#include <Modloader/app/structs/IInterruptable__Class.h>
#endif
#undef IL2CPP_STRUCT_IInterruptable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInterruptable_DEFINED) && !defined(IL2CPP_STRUCT_IInterruptable_FWDDECL)
#include <Modloader/app/structs/IInterruptable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInterruptable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
