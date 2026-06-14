#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OperatingSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OperatingSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperatingSystem_DEFINED)
#include <Modloader/app/structs/OperatingSystem__Fields.h>
#if defined(IL2CPP_STRUCT_OperatingSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_OperatingSystem_DEFINED
struct OperatingSystem__Class;
struct OperatingSystem {
    struct OperatingSystem__Class* klass;
    MonitorData* monitor;
    struct OperatingSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OperatingSystem_FWDDECL)
#define IL2CPP_STRUCT_OperatingSystem_FWDDECL
#include <Modloader/app/structs/OperatingSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_OperatingSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperatingSystem_DEFINED) && !defined(IL2CPP_STRUCT_OperatingSystem_FWDDECL)
#include <Modloader/app/structs/OperatingSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OperatingSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
