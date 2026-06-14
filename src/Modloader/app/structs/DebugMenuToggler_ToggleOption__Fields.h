#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenuToggler_ToggleOption__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenuToggler_ToggleOption__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuToggler_ToggleOption__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMenuToggler_ToggleOption__Fields_DEFINED
struct String;
struct List_1_UnityEngine_GameObject_;
struct List_1_UnityEngine_MonoBehaviour_;
struct __declspec(align(8)) DebugMenuToggler_ToggleOption__Fields {
    struct String* Name;
    struct List_1_UnityEngine_GameObject_* ObjectToEnable;
    struct List_1_UnityEngine_MonoBehaviour_* ComponentsToEnable;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugMenuToggler_ToggleOption__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugMenuToggler_ToggleOption__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_MonoBehaviour_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DebugMenuToggler_ToggleOption__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuToggler_ToggleOption__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenuToggler_ToggleOption__Fields_FWDDECL)
#include <Modloader/app/structs/DebugMenuToggler_ToggleOption__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenuToggler_ToggleOption__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
