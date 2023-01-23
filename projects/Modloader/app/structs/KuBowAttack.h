#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuBowAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuBowAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuBowAttack_DEFINED)
#include <Modloader/app/structs/KuBowAttack__Fields.h>
#if defined(IL2CPP_STRUCT_KuBowAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_KuBowAttack_DEFINED
struct KuBowAttack__Class;
struct KuBowAttack {
    struct KuBowAttack__Class* klass;
    MonitorData* monitor;
    struct KuBowAttack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuBowAttack_FWDDECL)
#define IL2CPP_STRUCT_KuBowAttack_FWDDECL
#include <Modloader/app/structs/KuBowAttack__Class.h>
#endif
#undef IL2CPP_STRUCT_KuBowAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuBowAttack_DEFINED) && !defined(IL2CPP_STRUCT_KuBowAttack_FWDDECL)
#include <Modloader/app/structs/KuBowAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuBowAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
