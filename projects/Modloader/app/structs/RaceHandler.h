#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceHandler_DEFINED)
#include <Modloader/app/structs/RaceHandler__Fields.h>
#if defined(IL2CPP_STRUCT_RaceHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceHandler_DEFINED
struct RaceHandler__Class;
struct RaceHandler {
    struct RaceHandler__Class* klass;
    MonitorData* monitor;
    struct RaceHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceHandler_FWDDECL)
#define IL2CPP_STRUCT_RaceHandler_FWDDECL
#include <Modloader/app/structs/RaceHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceHandler_DEFINED) && !defined(IL2CPP_STRUCT_RaceHandler_FWDDECL)
#include <Modloader/app/structs/RaceHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
