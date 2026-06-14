#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoSoulFlameZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoSoulFlameZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoSoulFlameZone_DEFINED)
#include <Modloader/app/structs/NoSoulFlameZone__Fields.h>
#if defined(IL2CPP_STRUCT_NoSoulFlameZone__Fields_DEFINED)
#define IL2CPP_STRUCT_NoSoulFlameZone_DEFINED
struct NoSoulFlameZone__Class;
struct NoSoulFlameZone {
    struct NoSoulFlameZone__Class* klass;
    MonitorData* monitor;
    struct NoSoulFlameZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoSoulFlameZone_FWDDECL)
#define IL2CPP_STRUCT_NoSoulFlameZone_FWDDECL
#include <Modloader/app/structs/NoSoulFlameZone__Class.h>
#endif
#undef IL2CPP_STRUCT_NoSoulFlameZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoSoulFlameZone_DEFINED) && !defined(IL2CPP_STRUCT_NoSoulFlameZone_FWDDECL)
#include <Modloader/app/structs/NoSoulFlameZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoSoulFlameZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
