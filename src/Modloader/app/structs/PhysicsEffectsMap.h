#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsEffectsMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsEffectsMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEffectsMap_DEFINED)
#include <Modloader/app/structs/PhysicsEffectsMap__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsEffectsMap__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsEffectsMap_DEFINED
struct PhysicsEffectsMap__Class;
struct PhysicsEffectsMap {
    struct PhysicsEffectsMap__Class* klass;
    MonitorData* monitor;
    struct PhysicsEffectsMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsEffectsMap_FWDDECL)
#define IL2CPP_STRUCT_PhysicsEffectsMap_FWDDECL
#include <Modloader/app/structs/PhysicsEffectsMap__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsEffectsMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEffectsMap_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsEffectsMap_FWDDECL)
#include <Modloader/app/structs/PhysicsEffectsMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsEffectsMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
