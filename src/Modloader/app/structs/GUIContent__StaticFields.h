#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIContent__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIContent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContent__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GUIContent__StaticFields_DEFINED
struct GUIContent;
struct GUIContent__StaticFields {
    struct GUIContent* s_Text;
    struct GUIContent* s_Image;
    struct GUIContent* s_TextImage;
    struct GUIContent* none;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIContent__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GUIContent__StaticFields_FWDDECL
#include <Modloader/app/structs/GUIContent.h>
#endif
#undef IL2CPP_STRUCT_GUIContent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContent__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GUIContent__StaticFields_FWDDECL)
#include <Modloader/app/structs/GUIContent__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIContent__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
