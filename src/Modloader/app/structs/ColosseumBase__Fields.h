#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColosseumBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColosseumBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumBase__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ColosseumBase__Fields_DEFINED
struct ActionSequence;
struct LegacyEntity;
struct ColosseumBase__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionSequence* BaseDestroyedAction;
    struct LegacyEntity* Entity;
    float StartHealth;
    float TouchDamage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColosseumBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColosseumBase__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/LegacyEntity.h>
#endif
#undef IL2CPP_STRUCT_ColosseumBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColosseumBase__Fields_FWDDECL)
#include <Modloader/app/structs/ColosseumBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColosseumBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
