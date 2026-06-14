#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackGuard_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackGuard_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackGuard_1_DEFINED)
#include <Modloader/app/structs/StackGuard_1__Fields.h>
#if defined(IL2CPP_STRUCT_StackGuard_1__Fields_DEFINED)
#define IL2CPP_STRUCT_StackGuard_1_DEFINED
struct StackGuard_1__Class;
struct StackGuard_1 {
    struct StackGuard_1__Class* klass;
    MonitorData* monitor;
    struct StackGuard_1__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StackGuard_1_FWDDECL)
#define IL2CPP_STRUCT_StackGuard_1_FWDDECL
#include <Modloader/app/structs/StackGuard_1__Class.h>
#endif
#undef IL2CPP_STRUCT_StackGuard_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackGuard_1_DEFINED) && !defined(IL2CPP_STRUCT_StackGuard_1_FWDDECL)
#include <Modloader/app/structs/StackGuard_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackGuard_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
