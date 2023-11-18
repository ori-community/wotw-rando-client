#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostProcessingProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostProcessingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostProcessingProfilingSetting_DEFINED)
#include <Modloader/app/structs/PostProcessingProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_PostProcessingProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_PostProcessingProfilingSetting_DEFINED
struct PostProcessingProfilingSetting__Class;
struct PostProcessingProfilingSetting {
    struct PostProcessingProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct PostProcessingProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PostProcessingProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_PostProcessingProfilingSetting_FWDDECL
#include <Modloader/app/structs/PostProcessingProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_PostProcessingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostProcessingProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_PostProcessingProfilingSetting_FWDDECL)
#include <Modloader/app/structs/PostProcessingProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostProcessingProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
