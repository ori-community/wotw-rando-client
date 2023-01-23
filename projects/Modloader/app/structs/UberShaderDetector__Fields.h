#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderDetector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderDetector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderDetector__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderDetector__Fields_DEFINED
struct Dictionary_2_System_String_System_Single_;
struct HashSet_1_System_String_;
struct String;
struct GUIStyle;
struct UberShaderDetector__Fields {
    struct MonoBehaviour__Fields _;
    struct Dictionary_2_System_String_System_Single_* m_found;
    struct HashSet_1_System_String_* m_instantiationsChecked;
    float m_lastRenderStringUpdate;
    struct String* m_renderString;
    bool m_imGuiRegistered;
    struct GUIStyle* m_labelStyle;
    bool m_forceTextUpdate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderDetector__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderDetector__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Single_.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UberShaderDetector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderDetector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderDetector__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderDetector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderDetector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
