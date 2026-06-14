#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bloom_Settings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bloom_Settings_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_Settings_DEFINED)
#include <Modloader/app/structs/Bloom_BloomBlendMode__Enum.h>
#if defined(IL2CPP_STRUCT_Bloom_BloomBlendMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Bloom_Settings_DEFINED
struct Bloom_Settings {
    bool enabled;
    Bloom_BloomBlendMode__Enum blendMode;

    float threshold;
    float softKnee;
    float radius;
    float intensity;
    bool highQuality;
    bool antiFlicker;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bloom_Settings_FWDDECL)
#define IL2CPP_STRUCT_Bloom_Settings_FWDDECL
#endif
#undef IL2CPP_STRUCT_Bloom_Settings_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_Settings_DEFINED) && !defined(IL2CPP_STRUCT_Bloom_Settings_FWDDECL)
#include <Modloader/app/structs/Bloom_Settings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bloom_Settings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
