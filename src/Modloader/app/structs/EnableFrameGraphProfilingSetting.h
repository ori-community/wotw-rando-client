#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnableFrameGraphProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnableFrameGraphProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableFrameGraphProfilingSetting_DEFINED)
#include <Modloader/app/structs/EnableFrameGraphProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_EnableFrameGraphProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_EnableFrameGraphProfilingSetting_DEFINED
struct EnableFrameGraphProfilingSetting__Class;
struct EnableFrameGraphProfilingSetting {
    struct EnableFrameGraphProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct EnableFrameGraphProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnableFrameGraphProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_EnableFrameGraphProfilingSetting_FWDDECL
#include <Modloader/app/structs/EnableFrameGraphProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_EnableFrameGraphProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableFrameGraphProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_EnableFrameGraphProfilingSetting_FWDDECL)
#include <Modloader/app/structs/EnableFrameGraphProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnableFrameGraphProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
