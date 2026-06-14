#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightInfluence__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightInfluence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluence__Fields_DEFINED)
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>
#if defined(IL2CPP_STRUCT_LightPriority_Layer__Enum_DEFINED)
#define IL2CPP_STRUCT_LightInfluence__Fields_DEFINED
struct __declspec(align(8)) LightInfluence__Fields {
    LightPriority_Layer__Enum Layer;

    float IntensityMultiplier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightInfluence__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightInfluence__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LightInfluence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluence__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightInfluence__Fields_FWDDECL)
#include <Modloader/app/structs/LightInfluence__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightInfluence__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
