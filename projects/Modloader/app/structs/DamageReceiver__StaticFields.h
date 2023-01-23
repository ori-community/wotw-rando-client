#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiver__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DamageReceiver__StaticFields_DEFINED
struct DamageReceiver__StaticFields {
    int32_t Hit2ndFxFrames;
    int32_t Hit2ndFxInstances;
    float Hit2ndFxDistThreshold;
};
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiver__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiver__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DamageReceiver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiver__StaticFields_FWDDECL)
#include <Modloader/app/structs/DamageReceiver__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiver__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
