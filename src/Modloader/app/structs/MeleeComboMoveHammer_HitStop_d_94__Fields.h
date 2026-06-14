#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveHammer_HitStop_d_94__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveHammer_HitStop_d_94__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammer_HitStop_d_94__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveHammer_HitStop_d_94__Fields_DEFINED
struct Object;
struct GameObject;
struct Component_1__Array;
struct __declspec(align(8)) MeleeComboMoveHammer_HitStop_d_94__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct GameObject* toSuspend;
    float suspendTime;
    struct Component_1__Array* _suspendables_5__2;
};
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammer_HitStop_d_94__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveHammer_HitStop_d_94__Fields_FWDDECL
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveHammer_HitStop_d_94__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammer_HitStop_d_94__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveHammer_HitStop_d_94__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveHammer_HitStop_d_94__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveHammer_HitStop_d_94__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
