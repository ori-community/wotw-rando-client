#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlyToUserInterfaceSpot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlyToUserInterfaceSpot_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlyToUserInterfaceSpot_DEFINED)
#include <Modloader/app/structs/FlyToUserInterfaceSpot__Fields.h>
#if defined(IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_DEFINED)
#define IL2CPP_STRUCT_FlyToUserInterfaceSpot_DEFINED
struct FlyToUserInterfaceSpot__Class;
struct FlyToUserInterfaceSpot {
    struct FlyToUserInterfaceSpot__Class* klass;
    MonitorData* monitor;
    struct FlyToUserInterfaceSpot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlyToUserInterfaceSpot_FWDDECL)
#define IL2CPP_STRUCT_FlyToUserInterfaceSpot_FWDDECL
#include <Modloader/app/structs/FlyToUserInterfaceSpot__Class.h>
#endif
#undef IL2CPP_STRUCT_FlyToUserInterfaceSpot_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlyToUserInterfaceSpot_DEFINED) && !defined(IL2CPP_STRUCT_FlyToUserInterfaceSpot_FWDDECL)
#include <Modloader/app/structs/FlyToUserInterfaceSpot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlyToUserInterfaceSpot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
