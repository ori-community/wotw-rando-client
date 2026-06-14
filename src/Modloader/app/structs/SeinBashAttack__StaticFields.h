#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBashAttack__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBashAttack__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBashAttack__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SeinBashAttack__StaticFields_DEFINED
struct Action_1_UnityEngine_Vector2_;
struct Action;
struct Action_1_EntityTargetting_;
struct SeinBashAttack__StaticFields {
    struct Action_1_UnityEngine_Vector2_* OnBashAttackEvent;
    struct Action* OnBashBegin;
    struct Action_1_EntityTargetting_* OnBashEnemy;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinBashAttack__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SeinBashAttack__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_EntityTargetting_.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Vector2_.h>
#endif
#undef IL2CPP_STRUCT_SeinBashAttack__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBashAttack__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBashAttack__StaticFields_FWDDECL)
#include <Modloader/app/structs/SeinBashAttack__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBashAttack__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
