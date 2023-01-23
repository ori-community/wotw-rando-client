#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSoftInteraction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSoftInteraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSoftInteraction_DEFINED)
#include <Modloader/app/structs/PhysicalSoftInteraction__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicalSoftInteraction_DEFINED
struct PhysicalSoftInteraction__Class;
struct PhysicalSoftInteraction {
    struct PhysicalSoftInteraction__Class* klass;
    MonitorData* monitor;
    struct PhysicalSoftInteraction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSoftInteraction_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSoftInteraction_FWDDECL
#include <Modloader/app/structs/PhysicalSoftInteraction__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSoftInteraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSoftInteraction_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSoftInteraction_FWDDECL)
#include <Modloader/app/structs/PhysicalSoftInteraction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSoftInteraction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
