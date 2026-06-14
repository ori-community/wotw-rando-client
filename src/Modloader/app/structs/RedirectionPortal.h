#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RedirectionPortal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RedirectionPortal_INITIALIZING
#if !defined(IL2CPP_STRUCT_RedirectionPortal_DEFINED)
#include <Modloader/app/structs/RedirectionPortal__Fields.h>
#if defined(IL2CPP_STRUCT_RedirectionPortal__Fields_DEFINED)
#define IL2CPP_STRUCT_RedirectionPortal_DEFINED
struct RedirectionPortal__Class;
struct RedirectionPortal {
    struct RedirectionPortal__Class* klass;
    MonitorData* monitor;
    struct RedirectionPortal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RedirectionPortal_FWDDECL)
#define IL2CPP_STRUCT_RedirectionPortal_FWDDECL
#include <Modloader/app/structs/RedirectionPortal__Class.h>
#endif
#undef IL2CPP_STRUCT_RedirectionPortal_INITIALIZING
#if !defined(IL2CPP_STRUCT_RedirectionPortal_DEFINED) && !defined(IL2CPP_STRUCT_RedirectionPortal_FWDDECL)
#include <Modloader/app/structs/RedirectionPortal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RedirectionPortal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
