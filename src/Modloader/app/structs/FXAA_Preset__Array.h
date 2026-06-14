#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA_Preset__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA_Preset__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_Preset__Array_DEFINED)
#include <Modloader/app/structs/FXAA_Preset.h>
#if defined(IL2CPP_STRUCT_FXAA_Preset_DEFINED)
#define IL2CPP_STRUCT_FXAA_Preset__Array_DEFINED
struct FXAA_Preset__Array__Class;
struct FXAA_Preset__Array {
    struct FXAA_Preset__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct FXAA_Preset vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FXAA_Preset__Array_FWDDECL)
#define IL2CPP_STRUCT_FXAA_Preset__Array_FWDDECL
#include <Modloader/app/structs/FXAA_Preset__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_FXAA_Preset__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_Preset__Array_DEFINED) && !defined(IL2CPP_STRUCT_FXAA_Preset__Array_FWDDECL)
#include <Modloader/app/structs/FXAA_Preset__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA_Preset__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
