#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBehaviourSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBehaviourSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBehaviourSettings__Fields_DEFINED)
#include <Modloader/app/structs/KwolokAttackCategory__Enum.h>
#if defined(IL2CPP_STRUCT_KwolokAttackCategory__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokBehaviourSettings__Fields_DEFINED
struct KwolokBossEntity_Phases__Enum__Array;
struct __declspec(align(8)) KwolokBehaviourSettings__Fields {
    struct KwolokBossEntity_Phases__Enum__Array* AllowedPhases;
    bool IsBlocking;
    KwolokAttackCategory__Enum Category;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBehaviourSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBehaviourSettings__Fields_FWDDECL
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_KwolokBehaviourSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBehaviourSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBehaviourSettings__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBehaviourSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBehaviourSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
