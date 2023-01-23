#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SplineEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SplineEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplineEventHandler_DEFINED)
#include <Modloader/app/structs/SplineEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SplineEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SplineEventHandler_DEFINED
struct SplineEventHandler__Class;
struct SplineEventHandler {
    struct SplineEventHandler__Class* klass;
    MonitorData* monitor;
    struct SplineEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SplineEventHandler_FWDDECL)
#define IL2CPP_STRUCT_SplineEventHandler_FWDDECL
#include <Modloader/app/structs/SplineEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SplineEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplineEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_SplineEventHandler_FWDDECL)
#include <Modloader/app/structs/SplineEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SplineEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
