#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoWorkEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoWorkEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoWorkEventHandler_DEFINED)
#include <Modloader/app/structs/DoWorkEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DoWorkEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DoWorkEventHandler_DEFINED
struct DoWorkEventHandler__Class;
struct DoWorkEventHandler {
    struct DoWorkEventHandler__Class* klass;
    MonitorData* monitor;
    struct DoWorkEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoWorkEventHandler_FWDDECL)
#define IL2CPP_STRUCT_DoWorkEventHandler_FWDDECL
#include <Modloader/app/structs/DoWorkEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DoWorkEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoWorkEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_DoWorkEventHandler_FWDDECL)
#include <Modloader/app/structs/DoWorkEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoWorkEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
