#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProcessStartInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProcessStartInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessStartInfo_DEFINED)
#include <Modloader/app/structs/ProcessStartInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ProcessStartInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ProcessStartInfo_DEFINED
struct ProcessStartInfo__Class;
struct ProcessStartInfo {
    struct ProcessStartInfo__Class* klass;
    MonitorData* monitor;
    struct ProcessStartInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProcessStartInfo_FWDDECL)
#define IL2CPP_STRUCT_ProcessStartInfo_FWDDECL
#include <Modloader/app/structs/ProcessStartInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ProcessStartInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessStartInfo_DEFINED) && !defined(IL2CPP_STRUCT_ProcessStartInfo_FWDDECL)
#include <Modloader/app/structs/ProcessStartInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProcessStartInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
