#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeSliceRenderSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeSliceRenderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings_DEFINED)
#include <Modloader/app/structs/RuntimeSliceRenderSettings__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeSliceRenderSettings_DEFINED
struct RuntimeSliceRenderSettings__Class;
struct RuntimeSliceRenderSettings {
    struct RuntimeSliceRenderSettings__Class* klass;
    MonitorData* monitor;
    struct RuntimeSliceRenderSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings_FWDDECL)
#define IL2CPP_STRUCT_RuntimeSliceRenderSettings_FWDDECL
#include <Modloader/app/structs/RuntimeSliceRenderSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeSliceRenderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings_FWDDECL)
#include <Modloader/app/structs/RuntimeSliceRenderSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeSliceRenderSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
