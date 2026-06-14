#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmartGUIText__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmartGUIText__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmartGUIText__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SmartGUIText__StaticFields_DEFINED
struct Dictionary_2_System_Int32_System_String_;
struct GUIStyle;
struct GUIContent;
struct SmartGUIText__StaticFields {
    struct Dictionary_2_System_Int32_System_String_* m_cache;
    bool m_initialized;
    int32_t m_cacheMaxDigitSize;
    struct GUIStyle* m_tempStyle;
    struct GUIContent* m_tempContent;
};
#endif
#if !defined(IL2CPP_STRUCT_SmartGUIText__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SmartGUIText__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_SmartGUIText__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmartGUIText__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SmartGUIText__StaticFields_FWDDECL)
#include <Modloader/app/structs/SmartGUIText__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmartGUIText__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
