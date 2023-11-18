#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarCreep__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarCreep__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarCreep__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarCreep__Fields_DEFINED
struct Vitals;
struct GameObject;
struct MortarCreep__Fields {
    struct MonoBehaviour__Fields _;
    struct Vitals* Vitals;
    struct GameObject* DeathEffect;
    float LifeTime;
    float m_lifeTimeLeft;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarCreep__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarCreep__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_MortarCreep__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarCreep__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarCreep__Fields_FWDDECL)
#include <Modloader/app/structs/MortarCreep__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarCreep__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
