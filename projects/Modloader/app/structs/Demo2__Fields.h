#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Demo2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Demo2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Demo2__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Demo2__Fields_DEFINED
struct GUIStyle;
struct Demo2__Fields {
    struct MonoBehaviour__Fields _;
    int32_t demoMode;
    struct GUIStyle* labelStyle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Demo2__Fields_FWDDECL)
#define IL2CPP_STRUCT_Demo2__Fields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_Demo2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Demo2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Demo2__Fields_FWDDECL)
#include <Modloader/app/structs/Demo2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Demo2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
