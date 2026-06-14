#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceManagerBinder_CurrentShaderSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceManagerBinder_CurrentShaderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManagerBinder_CurrentShaderSettings_DEFINED)
#define IL2CPP_STRUCT_TurbulenceManagerBinder_CurrentShaderSettings_DEFINED
struct Texture2D;
struct TurbulenceManagerBinder_CurrentShaderSettings {
    float Speed;
    float Strength;
    struct Texture2D* TurbulenceTexture;
    float Duration;
    float Offset;
};
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceManagerBinder_CurrentShaderSettings_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceManagerBinder_CurrentShaderSettings_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceManagerBinder_CurrentShaderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManagerBinder_CurrentShaderSettings_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceManagerBinder_CurrentShaderSettings_FWDDECL)
#include <Modloader/app/structs/TurbulenceManagerBinder_CurrentShaderSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceManagerBinder_CurrentShaderSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
