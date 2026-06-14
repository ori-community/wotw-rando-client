#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_PredicationSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_PredicationSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_PredicationSettings__Boxed_DEFINED)
#include <Modloader/app/structs/SMAA_PredicationSettings.h>
#if defined(IL2CPP_STRUCT_SMAA_PredicationSettings_DEFINED)
#define IL2CPP_STRUCT_SMAA_PredicationSettings__Boxed_DEFINED
struct SMAA_PredicationSettings__Class;
struct SMAA_PredicationSettings__Boxed {
    struct SMAA_PredicationSettings__Class* klass;
    MonitorData* monitor;
    struct SMAA_PredicationSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SMAA_PredicationSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SMAA_PredicationSettings__Boxed_FWDDECL
#include <Modloader/app/structs/SMAA_PredicationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SMAA_PredicationSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_PredicationSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_PredicationSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/SMAA_PredicationSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_PredicationSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
