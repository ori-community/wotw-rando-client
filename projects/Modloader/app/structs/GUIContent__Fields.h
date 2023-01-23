#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIContent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIContent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContent__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIContent__Fields_DEFINED
struct String;
struct Texture;
struct __declspec(align(8)) GUIContent__Fields {
    struct String* m_Text;
    struct Texture* m_Image;
    struct String* m_Tooltip;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIContent__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUIContent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_GUIContent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUIContent__Fields_FWDDECL)
#include <Modloader/app/structs/GUIContent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIContent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
