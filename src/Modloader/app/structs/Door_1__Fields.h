#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Door_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Door_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Door_1__Fields_DEFINED)
#include <Modloader/app/structs/Door_OpenState__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Door_OpenState__Enum_DEFINED)
#define IL2CPP_STRUCT_Door_1__Fields_DEFINED
struct Action_1_ZenFulcrum_EmbeddedBrowser_Door_OpenState_;
struct Door_1__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 openOffset;
    float openSpeed;
    int32_t numCoins;
    struct Vector3 closedPos;
    struct Vector3 openPos;
    struct Action_1_ZenFulcrum_EmbeddedBrowser_Door_OpenState_* stateChange;
    Door_OpenState__Enum _state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Door_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Door_1__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_ZenFulcrum_EmbeddedBrowser_Door_OpenState_.h>
#endif
#undef IL2CPP_STRUCT_Door_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Door_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Door_1__Fields_FWDDECL)
#include <Modloader/app/structs/Door_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Door_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
