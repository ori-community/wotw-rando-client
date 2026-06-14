#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickupOrbSystem__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickupOrbSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupOrbSystem__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PickupOrbSystem__StaticFields_DEFINED
struct PickupOrbSystem;
struct List_1_StretchGameObject_;
struct List_1_PickupBase_;
struct List_1_DropPickup_;
struct Transform__Array;
struct Vector3__Array;
struct Quaternion__Array;
struct PickupOrbSystem__StaticFields {
    bool EnableStretch;
    struct PickupOrbSystem* _Instance_k__BackingField;
    struct List_1_StretchGameObject_* s_stretchTargets;
    struct List_1_PickupBase_* s_basePickups;
    struct List_1_DropPickup_* s_dropPickups;
    struct Transform__Array* s_dropPickupTransforms;
    struct Vector3__Array* s_dropPickupPositions;
    struct Quaternion__Array* s_dropPickupRotations;
    struct Vector3__Array* s_dropPickupScaless;
};
#endif
#if !defined(IL2CPP_STRUCT_PickupOrbSystem__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PickupOrbSystem__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_DropPickup_.h>
#include <Modloader/app/structs/List_1_PickupBase_.h>
#include <Modloader/app/structs/List_1_StretchGameObject_.h>
#include <Modloader/app/structs/PickupOrbSystem.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_PickupOrbSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupOrbSystem__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PickupOrbSystem__StaticFields_FWDDECL)
#include <Modloader/app/structs/PickupOrbSystem__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickupOrbSystem__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
