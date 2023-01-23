#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorSetupHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorSetupHolder_DEFINED)
#include <Modloader/app/structs/DoorSetupHolder__Fields.h>
#if defined(IL2CPP_STRUCT_DoorSetupHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_DoorSetupHolder_DEFINED
struct DoorSetupHolder__Class;
struct DoorSetupHolder {
    struct DoorSetupHolder__Class* klass;
    MonitorData* monitor;
    struct DoorSetupHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoorSetupHolder_FWDDECL)
#define IL2CPP_STRUCT_DoorSetupHolder_FWDDECL
#include <Modloader/app/structs/DoorSetupHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_DoorSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorSetupHolder_DEFINED) && !defined(IL2CPP_STRUCT_DoorSetupHolder_FWDDECL)
#include <Modloader/app/structs/DoorSetupHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorSetupHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
