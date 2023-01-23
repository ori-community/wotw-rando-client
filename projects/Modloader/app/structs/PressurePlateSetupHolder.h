#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PressurePlateSetupHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PressurePlateSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlateSetupHolder_DEFINED)
#include <Modloader/app/structs/PressurePlateSetupHolder__Fields.h>
#if defined(IL2CPP_STRUCT_PressurePlateSetupHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_PressurePlateSetupHolder_DEFINED
struct PressurePlateSetupHolder__Class;
struct PressurePlateSetupHolder {
    struct PressurePlateSetupHolder__Class* klass;
    MonitorData* monitor;
    struct PressurePlateSetupHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PressurePlateSetupHolder_FWDDECL)
#define IL2CPP_STRUCT_PressurePlateSetupHolder_FWDDECL
#include <Modloader/app/structs/PressurePlateSetupHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_PressurePlateSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlateSetupHolder_DEFINED) && !defined(IL2CPP_STRUCT_PressurePlateSetupHolder_FWDDECL)
#include <Modloader/app/structs/PressurePlateSetupHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PressurePlateSetupHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
