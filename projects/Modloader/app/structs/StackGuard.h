#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackGuard_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackGuard_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackGuard_DEFINED)
#include <Modloader/app/structs/StackGuard__Fields.h>
#if defined(IL2CPP_STRUCT_StackGuard__Fields_DEFINED)
#define IL2CPP_STRUCT_StackGuard_DEFINED
struct StackGuard__Class;
struct StackGuard {
    struct StackGuard__Class* klass;
    MonitorData* monitor;
    struct StackGuard__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StackGuard_FWDDECL)
#define IL2CPP_STRUCT_StackGuard_FWDDECL
#include <Modloader/app/structs/StackGuard__Class.h>
#endif
#undef IL2CPP_STRUCT_StackGuard_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackGuard_DEFINED) && !defined(IL2CPP_STRUCT_StackGuard_FWDDECL)
#include <Modloader/app/structs/StackGuard.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackGuard.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
