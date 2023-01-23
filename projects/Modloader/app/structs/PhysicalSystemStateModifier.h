#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemStateModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemStateModifier_DEFINED)
#include <Modloader/app/structs/PhysicalSystemStateModifier__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicalSystemStateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemStateModifier_DEFINED
struct PhysicalSystemStateModifier__Class;
struct PhysicalSystemStateModifier {
    struct PhysicalSystemStateModifier__Class* klass;
    MonitorData* monitor;
    struct PhysicalSystemStateModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemStateModifier_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemStateModifier_FWDDECL
#include <Modloader/app/structs/PhysicalSystemStateModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSystemStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemStateModifier_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemStateModifier_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemStateModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemStateModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
