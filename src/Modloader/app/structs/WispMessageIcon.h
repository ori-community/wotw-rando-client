#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WispMessageIcon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WispMessageIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispMessageIcon_DEFINED)
#include <Modloader/app/structs/WispMessageIcon__Fields.h>
#if defined(IL2CPP_STRUCT_WispMessageIcon__Fields_DEFINED)
#define IL2CPP_STRUCT_WispMessageIcon_DEFINED
struct WispMessageIcon__Class;
struct WispMessageIcon {
    struct WispMessageIcon__Class* klass;
    MonitorData* monitor;
    struct WispMessageIcon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WispMessageIcon_FWDDECL)
#define IL2CPP_STRUCT_WispMessageIcon_FWDDECL
#include <Modloader/app/structs/WispMessageIcon__Class.h>
#endif
#undef IL2CPP_STRUCT_WispMessageIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispMessageIcon_DEFINED) && !defined(IL2CPP_STRUCT_WispMessageIcon_FWDDECL)
#include <Modloader/app/structs/WispMessageIcon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WispMessageIcon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
