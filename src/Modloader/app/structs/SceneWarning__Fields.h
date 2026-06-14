#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneWarning__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneWarning__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneWarning__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SceneWarning_MessageMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SceneWarning_MessageMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneWarning__Fields_DEFINED
struct String;
struct SceneWarning__Fields {
    struct MonoBehaviour__Fields _;
    struct String* Message;
    SceneWarning_MessageMode__Enum Mode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneWarning__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneWarning__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneWarning__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneWarning__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneWarning__Fields_FWDDECL)
#include <Modloader/app/structs/SceneWarning__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneWarning__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
