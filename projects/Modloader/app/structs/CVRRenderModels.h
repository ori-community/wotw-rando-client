#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRRenderModels_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRRenderModels_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRRenderModels_DEFINED)
#include <Modloader/app/structs/CVRRenderModels__Fields.h>
#if defined(IL2CPP_STRUCT_CVRRenderModels__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRRenderModels_DEFINED
struct CVRRenderModels__Class;
struct CVRRenderModels {
    struct CVRRenderModels__Class* klass;
    MonitorData* monitor;
    struct CVRRenderModels__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRRenderModels_FWDDECL)
#define IL2CPP_STRUCT_CVRRenderModels_FWDDECL
#include <Modloader/app/structs/CVRRenderModels__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRRenderModels_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRRenderModels_DEFINED) && !defined(IL2CPP_STRUCT_CVRRenderModels_FWDDECL)
#include <Modloader/app/structs/CVRRenderModels.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRRenderModels.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
