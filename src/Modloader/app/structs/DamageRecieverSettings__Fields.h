#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageRecieverSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageRecieverSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageRecieverSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageRecieverSettings__Fields_DEFINED
struct DamageBasedPrefabProvider;
struct __declspec(align(8)) DamageRecieverSettings__Fields {
    struct DamageBasedPrefabProvider* DamageEffect;
    struct DamageBasedPrefabProvider* DeathEffect;
};
#endif
#if !defined(IL2CPP_STRUCT_DamageRecieverSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageRecieverSettings__Fields_FWDDECL
#include <Modloader/app/structs/DamageBasedPrefabProvider.h>
#endif
#undef IL2CPP_STRUCT_DamageRecieverSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageRecieverSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageRecieverSettings__Fields_FWDDECL)
#include <Modloader/app/structs/DamageRecieverSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageRecieverSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
