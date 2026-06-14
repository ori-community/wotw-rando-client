#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_DEFINED
struct LensAberrations_ChromaticAberrationSettings {
    bool enabled;
    struct Color color;
    float amount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_FWDDECL)
#define IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_DEFINED) && !defined(IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_FWDDECL)
#include <Modloader/app/structs/LensAberrations_ChromaticAberrationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LensAberrations_ChromaticAberrationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
