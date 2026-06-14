#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RefTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RefTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefTest__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RefTest__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonReference_1_SetupState_;
struct MoonReference_1_SetupStateModifier_;
struct RefTest__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* x;
    struct MoonReference_1_SetupState_* error;
    struct MoonReference_1_SetupStateModifier_* z;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RefTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_RefTest__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_SetupStateModifier_.h>
#include <Modloader/app/structs/MoonReference_1_SetupState_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_RefTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RefTest__Fields_FWDDECL)
#include <Modloader/app/structs/RefTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RefTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
