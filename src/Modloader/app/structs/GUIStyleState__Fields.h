#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIStyleState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIStyleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIStyleState__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIStyleState__Fields_DEFINED
struct GUIStyle;
struct __declspec(align(8)) GUIStyleState__Fields {
    void* m_Ptr;
    struct GUIStyle* m_SourceStyle;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIStyleState__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUIStyleState__Fields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_GUIStyleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIStyleState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUIStyleState__Fields_FWDDECL)
#include <Modloader/app/structs/GUIStyleState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIStyleState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
