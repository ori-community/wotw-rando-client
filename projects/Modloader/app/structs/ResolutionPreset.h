#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResolutionPreset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResolutionPreset_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolutionPreset_DEFINED)
#include <Modloader/app/structs/ResolutionPreset__Fields.h>
#if defined(IL2CPP_STRUCT_ResolutionPreset__Fields_DEFINED)
#define IL2CPP_STRUCT_ResolutionPreset_DEFINED
struct ResolutionPreset__Class;
struct ResolutionPreset {
    struct ResolutionPreset__Class* klass;
    MonitorData* monitor;
    struct ResolutionPreset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResolutionPreset_FWDDECL)
#define IL2CPP_STRUCT_ResolutionPreset_FWDDECL
#include <Modloader/app/structs/ResolutionPreset__Class.h>
#endif
#undef IL2CPP_STRUCT_ResolutionPreset_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolutionPreset_DEFINED) && !defined(IL2CPP_STRUCT_ResolutionPreset_FWDDECL)
#include <Modloader/app/structs/ResolutionPreset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResolutionPreset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
