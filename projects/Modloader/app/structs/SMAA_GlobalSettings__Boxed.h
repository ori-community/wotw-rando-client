#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_GlobalSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_GlobalSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_GlobalSettings__Boxed_DEFINED)
#include <Modloader/app/structs/SMAA_GlobalSettings.h>
#if defined(IL2CPP_STRUCT_SMAA_GlobalSettings_DEFINED)
#define IL2CPP_STRUCT_SMAA_GlobalSettings__Boxed_DEFINED
struct SMAA_GlobalSettings__Class;
struct SMAA_GlobalSettings__Boxed {
    struct SMAA_GlobalSettings__Class* klass;
    MonitorData* monitor;
    struct SMAA_GlobalSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SMAA_GlobalSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SMAA_GlobalSettings__Boxed_FWDDECL
#include <Modloader/app/structs/SMAA_GlobalSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SMAA_GlobalSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_GlobalSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_GlobalSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/SMAA_GlobalSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_GlobalSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
