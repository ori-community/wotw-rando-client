#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostEffectsHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostEffectsHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostEffectsHelper_DEFINED)
#include <Modloader/app/structs/PostEffectsHelper__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_PostEffectsHelper_DEFINED
struct PostEffectsHelper__Class;
struct PostEffectsHelper {
    struct PostEffectsHelper__Class* klass;
    MonitorData* monitor;
    struct PostEffectsHelper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PostEffectsHelper_FWDDECL)
#define IL2CPP_STRUCT_PostEffectsHelper_FWDDECL
#include <Modloader/app/structs/PostEffectsHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_PostEffectsHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostEffectsHelper_DEFINED) && !defined(IL2CPP_STRUCT_PostEffectsHelper_FWDDECL)
#include <Modloader/app/structs/PostEffectsHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostEffectsHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
