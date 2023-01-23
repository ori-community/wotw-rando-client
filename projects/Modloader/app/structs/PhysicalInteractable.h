#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalInteractable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalInteractable_DEFINED)
#include <Modloader/app/structs/PhysicalInteractable__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicalInteractable__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicalInteractable_DEFINED
struct PhysicalInteractable__Class;
struct PhysicalInteractable {
    struct PhysicalInteractable__Class* klass;
    MonitorData* monitor;
    struct PhysicalInteractable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalInteractable_FWDDECL)
#define IL2CPP_STRUCT_PhysicalInteractable_FWDDECL
#include <Modloader/app/structs/PhysicalInteractable__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicalInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalInteractable_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalInteractable_FWDDECL)
#include <Modloader/app/structs/PhysicalInteractable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalInteractable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
