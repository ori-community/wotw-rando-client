#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemState_DEFINED)
#include <Modloader/app/structs/PhysicalSystemState__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicalSystemState__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemState_DEFINED
struct PhysicalSystemState__Class;
struct PhysicalSystemState {
    struct PhysicalSystemState__Class* klass;
    MonitorData* monitor;
    struct PhysicalSystemState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemState_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemState_FWDDECL
#include <Modloader/app/structs/PhysicalSystemState__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSystemState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemState_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemState_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
