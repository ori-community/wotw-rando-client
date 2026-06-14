#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Phone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Phone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Phone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Phone__Fields_DEFINED
struct Collider;
struct InteractionObject;
struct GameObject;
struct Transform;
struct Phone__Fields {
    struct MonoBehaviour__Fields _;
    struct Collider* pickUpCollider;
    struct InteractionObject* pickUpObject;
    struct GameObject* display;
    struct Transform* parent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Phone__Fields_FWDDECL)
#define IL2CPP_STRUCT_Phone__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Phone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Phone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Phone__Fields_FWDDECL)
#include <Modloader/app/structs/Phone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Phone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
