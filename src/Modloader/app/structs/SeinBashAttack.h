#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBashAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBashAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBashAttack_DEFINED)
#include <Modloader/app/structs/SeinBashAttack__Fields.h>
#if defined(IL2CPP_STRUCT_SeinBashAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBashAttack_DEFINED
struct SeinBashAttack__Class;
struct SeinBashAttack {
    struct SeinBashAttack__Class* klass;
    MonitorData* monitor;
    struct SeinBashAttack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBashAttack_FWDDECL)
#define IL2CPP_STRUCT_SeinBashAttack_FWDDECL
#include <Modloader/app/structs/SeinBashAttack__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinBashAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBashAttack_DEFINED) && !defined(IL2CPP_STRUCT_SeinBashAttack_FWDDECL)
#include <Modloader/app/structs/SeinBashAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBashAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
