#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PressurePlate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PressurePlate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlate_DEFINED)
#include <Modloader/app/structs/PressurePlate__Fields.h>
#if defined(IL2CPP_STRUCT_PressurePlate__Fields_DEFINED)
#define IL2CPP_STRUCT_PressurePlate_DEFINED
struct PressurePlate__Class;
struct PressurePlate {
    struct PressurePlate__Class* klass;
    MonitorData* monitor;
    struct PressurePlate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PressurePlate_FWDDECL)
#define IL2CPP_STRUCT_PressurePlate_FWDDECL
#include <Modloader/app/structs/PressurePlate__Class.h>
#endif
#undef IL2CPP_STRUCT_PressurePlate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlate_DEFINED) && !defined(IL2CPP_STRUCT_PressurePlate_FWDDECL)
#include <Modloader/app/structs/PressurePlate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PressurePlate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
