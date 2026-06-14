#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SliceRenderSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SliceRenderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceRenderSettings_DEFINED)
#include <Modloader/app/structs/SliceRenderSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SliceRenderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SliceRenderSettings_DEFINED
struct SliceRenderSettings__Class;
struct SliceRenderSettings {
    struct SliceRenderSettings__Class* klass;
    MonitorData* monitor;
    struct SliceRenderSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SliceRenderSettings_FWDDECL)
#define IL2CPP_STRUCT_SliceRenderSettings_FWDDECL
#include <Modloader/app/structs/SliceRenderSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SliceRenderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceRenderSettings_DEFINED) && !defined(IL2CPP_STRUCT_SliceRenderSettings_FWDDECL)
#include <Modloader/app/structs/SliceRenderSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SliceRenderSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
