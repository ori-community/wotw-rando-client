#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBBIKSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBBIKSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKSettings_DEFINED)
#include <Modloader/app/structs/FBBIKSettings__Fields.h>
#if defined(IL2CPP_STRUCT_FBBIKSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FBBIKSettings_DEFINED
struct FBBIKSettings__Class;
struct FBBIKSettings {
    struct FBBIKSettings__Class* klass;
    MonitorData* monitor;
    struct FBBIKSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBBIKSettings_FWDDECL)
#define IL2CPP_STRUCT_FBBIKSettings_FWDDECL
#include <Modloader/app/structs/FBBIKSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_FBBIKSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKSettings_DEFINED) && !defined(IL2CPP_STRUCT_FBBIKSettings_FWDDECL)
#include <Modloader/app/structs/FBBIKSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBBIKSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
