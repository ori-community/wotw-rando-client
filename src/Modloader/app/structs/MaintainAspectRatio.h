#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaintainAspectRatio_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaintainAspectRatio_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaintainAspectRatio_DEFINED)
#include <Modloader/app/structs/MaintainAspectRatio__Fields.h>
#if defined(IL2CPP_STRUCT_MaintainAspectRatio__Fields_DEFINED)
#define IL2CPP_STRUCT_MaintainAspectRatio_DEFINED
struct MaintainAspectRatio__Class;
struct MaintainAspectRatio {
    struct MaintainAspectRatio__Class* klass;
    MonitorData* monitor;
    struct MaintainAspectRatio__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaintainAspectRatio_FWDDECL)
#define IL2CPP_STRUCT_MaintainAspectRatio_FWDDECL
#include <Modloader/app/structs/MaintainAspectRatio__Class.h>
#endif
#undef IL2CPP_STRUCT_MaintainAspectRatio_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaintainAspectRatio_DEFINED) && !defined(IL2CPP_STRUCT_MaintainAspectRatio_FWDDECL)
#include <Modloader/app/structs/MaintainAspectRatio.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaintainAspectRatio.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
