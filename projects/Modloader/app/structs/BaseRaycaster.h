#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseRaycaster_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseRaycaster_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseRaycaster_DEFINED)
#include <Modloader/app/structs/BaseRaycaster__Fields.h>
#if defined(IL2CPP_STRUCT_BaseRaycaster__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseRaycaster_DEFINED
struct BaseRaycaster__Class;
struct BaseRaycaster {
    struct BaseRaycaster__Class* klass;
    MonitorData* monitor;
    struct BaseRaycaster__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseRaycaster_FWDDECL)
#define IL2CPP_STRUCT_BaseRaycaster_FWDDECL
#include <Modloader/app/structs/BaseRaycaster__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseRaycaster_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseRaycaster_DEFINED) && !defined(IL2CPP_STRUCT_BaseRaycaster_FWDDECL)
#include <Modloader/app/structs/BaseRaycaster.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseRaycaster.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
