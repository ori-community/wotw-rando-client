#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuBowAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuBowAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuBowAttack__Fields_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#include <Modloader/app/structs/SeinBowAttack_State__Enum.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinBowAttack_State__Enum_DEFINED)
#define IL2CPP_STRUCT_KuBowAttack__Fields_DEFINED
struct KuBowAttack__Fields {
    struct KuState__Fields _;
    SeinBowAttack_State__Enum m_lastBowState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuBowAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuBowAttack__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_KuBowAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuBowAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuBowAttack__Fields_FWDDECL)
#include <Modloader/app/structs/KuBowAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuBowAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
