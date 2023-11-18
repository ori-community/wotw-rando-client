#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderTime__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderTime__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderTime__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ShaderTime__StaticFields_DEFINED
struct BoolPref;
struct ShaderTime__StaticFields {
    struct BoolPref* pref_freezeCameraSwaying;
    struct BoolPref* pref_freezeShaderTime;
    struct BoolPref* pref_freezeShaderTurbulenceTime;
    struct BoolPref* pref_freezeShaderTurbulenceStrength;
    struct BoolPref* pref_freezeShaderGameTime;
    float time;
    float deltaTime;
    float smoothDeltaTime;
    float turbulenceTime;
    float gameTime;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderTime__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ShaderTime__StaticFields_FWDDECL
#include <Modloader/app/structs/BoolPref.h>
#endif
#undef IL2CPP_STRUCT_ShaderTime__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderTime__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ShaderTime__StaticFields_FWDDECL)
#include <Modloader/app/structs/ShaderTime__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderTime__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
