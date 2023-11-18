#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Door__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Door__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Door__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Door__Fields_DEFINED
struct DynamicDataResolver;
struct Transform;
struct DoorSetupHolder;
struct IUberState__Array;
struct Door__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct Transform* DoorTransform;
    struct DoorSetupHolder* SetupStates;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Door__Fields_FWDDECL)
#define IL2CPP_STRUCT_Door__Fields_FWDDECL
#include <Modloader/app/structs/DoorSetupHolder.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Door__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Door__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Door__Fields_FWDDECL)
#include <Modloader/app/structs/Door__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Door__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
