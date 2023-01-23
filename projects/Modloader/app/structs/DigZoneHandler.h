#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigZoneHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigZoneHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigZoneHandler_DEFINED)
#include <Modloader/app/structs/DigZoneHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DigZoneHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DigZoneHandler_DEFINED
struct DigZoneHandler__Class;
struct DigZoneHandler {
    struct DigZoneHandler__Class* klass;
    MonitorData* monitor;
    struct DigZoneHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DigZoneHandler_FWDDECL)
#define IL2CPP_STRUCT_DigZoneHandler_FWDDECL
#include <Modloader/app/structs/DigZoneHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DigZoneHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigZoneHandler_DEFINED) && !defined(IL2CPP_STRUCT_DigZoneHandler_FWDDECL)
#include <Modloader/app/structs/DigZoneHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigZoneHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
