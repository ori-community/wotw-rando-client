#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolSettings__Fields_DEFINED
struct __declspec(align(8)) UberPoolSettings__Fields {
    float InactiveDeleteTime;
    bool UsePool;
    bool DisableInactivityPruning;
    bool SkipPrewarmIfUsingScenePooling;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberPoolSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolSettings__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
