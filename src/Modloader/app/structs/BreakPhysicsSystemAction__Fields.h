#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakPhysicsSystemAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakPhysicsSystemAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakPhysicsSystemAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_BreakPhysicsSystemAction__Fields_DEFINED
struct GameObject;
struct PhysicalSystemManager;
struct BreakPhysicsSystemAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject* partsContainer;
    struct PhysicalSystemManager* physicalManager;
    bool Save;
    struct LayerMask debrisLayer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BreakPhysicsSystemAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_BreakPhysicsSystemAction__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#endif
#undef IL2CPP_STRUCT_BreakPhysicsSystemAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakPhysicsSystemAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BreakPhysicsSystemAction__Fields_FWDDECL)
#include <Modloader/app/structs/BreakPhysicsSystemAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakPhysicsSystemAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
