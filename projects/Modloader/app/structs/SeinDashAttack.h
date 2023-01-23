#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDashAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDashAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashAttack_DEFINED)
#include <Modloader/app/structs/SeinDashAttack__Fields.h>
#if defined(IL2CPP_STRUCT_SeinDashAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDashAttack_DEFINED
struct SeinDashAttack__Class;
struct SeinDashAttack {
    struct SeinDashAttack__Class* klass;
    MonitorData* monitor;
    struct SeinDashAttack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDashAttack_FWDDECL)
#define IL2CPP_STRUCT_SeinDashAttack_FWDDECL
#include <Modloader/app/structs/SeinDashAttack__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinDashAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashAttack_DEFINED) && !defined(IL2CPP_STRUCT_SeinDashAttack_FWDDECL)
#include <Modloader/app/structs/SeinDashAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDashAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
