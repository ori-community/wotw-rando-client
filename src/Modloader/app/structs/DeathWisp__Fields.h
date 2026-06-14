#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathWisp__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathWisp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathWisp__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DeathWisp__Fields_DEFINED
struct DeathInformation;
struct BaseAnimator;
struct GameObject;
struct Transform;
struct DeathWisp__Fields {
    struct MonoBehaviour__Fields _;
    struct DeathInformation* DeathInfo;
    struct BaseAnimator* Disappear;
    float Radius;
    struct GameObject* CollectionEffect;
    struct Transform* m_transform;
    bool m_collected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathWisp__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeathWisp__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/DeathInformation.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DeathWisp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathWisp__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeathWisp__Fields_FWDDECL)
#include <Modloader/app/structs/DeathWisp__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathWisp__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
