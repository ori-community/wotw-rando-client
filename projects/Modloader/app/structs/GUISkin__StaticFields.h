#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUISkin__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUISkin__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISkin__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GUISkin__StaticFields_DEFINED
struct GUIStyle;
struct GUISkin_SkinChangedDelegate;
struct GUISkin;
struct GUISkin__StaticFields {
    struct GUIStyle* ms_Error;
    struct GUISkin_SkinChangedDelegate* m_SkinChanged;
    struct GUISkin* current;
};
#endif
#if !defined(IL2CPP_STRUCT_GUISkin__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GUISkin__StaticFields_FWDDECL
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/GUISkin_SkinChangedDelegate.h>
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_GUISkin__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISkin__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GUISkin__StaticFields_FWDDECL)
#include <Modloader/app/structs/GUISkin__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUISkin__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
