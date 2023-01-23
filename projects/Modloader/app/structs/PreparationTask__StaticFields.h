#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreparationTask__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreparationTask__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreparationTask__StaticFields_DEFINED)
#include <Modloader/app/structs/RenderScope__Enum.h>
#if defined(IL2CPP_STRUCT_RenderScope__Enum_DEFINED)
#define IL2CPP_STRUCT_PreparationTask__StaticFields_DEFINED
struct HashSet_1_Moon_ISuspendable_;
struct PreparationTask__StaticFields {
    bool s_debugImmortalMode;
    bool s_immortal;
    float s_gravityStrength;
    int32_t s_maxDRSDownscale;
    int32_t s_maxDRSDownscaleY;
    RenderScope__Enum s_allowInterleaved;

    struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreparationTask__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PreparationTask__StaticFields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#endif
#undef IL2CPP_STRUCT_PreparationTask__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreparationTask__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PreparationTask__StaticFields_FWDDECL)
#include <Modloader/app/structs/PreparationTask__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreparationTask__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
