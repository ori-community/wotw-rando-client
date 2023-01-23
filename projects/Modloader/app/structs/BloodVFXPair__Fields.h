#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BloodVFXPair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BloodVFXPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloodVFXPair__Fields_DEFINED)
#include <Modloader/app/structs/DamageRecieverType__Enum.h>
#if defined(IL2CPP_STRUCT_DamageRecieverType__Enum_DEFINED)
#define IL2CPP_STRUCT_BloodVFXPair__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) BloodVFXPair__Fields {
    DamageRecieverType__Enum Type;

    struct GameObject* BloodPrefab;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BloodVFXPair__Fields_FWDDECL)
#define IL2CPP_STRUCT_BloodVFXPair__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_BloodVFXPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloodVFXPair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BloodVFXPair__Fields_FWDDECL)
#include <Modloader/app/structs/BloodVFXPair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BloodVFXPair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
