#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoubleLinkAxis_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoubleLinkAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleLinkAxis_DEFINED)
#include <Modloader/app/structs/DoubleLinkAxis__Fields.h>
#if defined(IL2CPP_STRUCT_DoubleLinkAxis__Fields_DEFINED)
#define IL2CPP_STRUCT_DoubleLinkAxis_DEFINED
struct DoubleLinkAxis__Class;
struct DoubleLinkAxis {
    struct DoubleLinkAxis__Class* klass;
    MonitorData* monitor;
    struct DoubleLinkAxis__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoubleLinkAxis_FWDDECL)
#define IL2CPP_STRUCT_DoubleLinkAxis_FWDDECL
#include <Modloader/app/structs/DoubleLinkAxis__Class.h>
#endif
#undef IL2CPP_STRUCT_DoubleLinkAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleLinkAxis_DEFINED) && !defined(IL2CPP_STRUCT_DoubleLinkAxis_FWDDECL)
#include <Modloader/app/structs/DoubleLinkAxis.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoubleLinkAxis.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
