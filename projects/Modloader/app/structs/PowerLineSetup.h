#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PowerLineSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PowerLineSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerLineSetup_DEFINED)
#include <Modloader/app/structs/PowerLineSetup__Fields.h>
#if defined(IL2CPP_STRUCT_PowerLineSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_PowerLineSetup_DEFINED
struct PowerLineSetup__Class;
struct PowerLineSetup {
    struct PowerLineSetup__Class* klass;
    MonitorData* monitor;
    struct PowerLineSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PowerLineSetup_FWDDECL)
#define IL2CPP_STRUCT_PowerLineSetup_FWDDECL
#include <Modloader/app/structs/PowerLineSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_PowerLineSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerLineSetup_DEFINED) && !defined(IL2CPP_STRUCT_PowerLineSetup_FWDDECL)
#include <Modloader/app/structs/PowerLineSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PowerLineSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
