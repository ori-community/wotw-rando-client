#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RigidbodyConstraints__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RigidbodyConstraints__Enum_DEFINED)
#define IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_DEFINED
struct Rigidbody;
struct RigidbodyInertiaModifier__Fields {
    struct MonoBehaviour__Fields _;
    struct Rigidbody* rigidBody;
    struct Vector3 inertia;
    RigidbodyConstraints__Enum m_oldConstraints;

    bool m_constraintsSaved;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_FWDDECL)
#include <Modloader/app/structs/RigidbodyInertiaModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyInertiaModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
