#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorLogic_DEFINED)
#include <Modloader/app/structs/DoorLogic__Fields.h>
#if defined(IL2CPP_STRUCT_DoorLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_DoorLogic_DEFINED
struct DoorLogic__Class;
struct DoorLogic {
    struct DoorLogic__Class* klass;
    MonitorData* monitor;
    struct DoorLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoorLogic_FWDDECL)
#define IL2CPP_STRUCT_DoorLogic_FWDDECL
#include <Modloader/app/structs/DoorLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_DoorLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorLogic_DEFINED) && !defined(IL2CPP_STRUCT_DoorLogic_FWDDECL)
#include <Modloader/app/structs/DoorLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
