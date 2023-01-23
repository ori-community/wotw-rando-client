#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolatileDebugMenuLog__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolatileDebugMenuLog__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolatileDebugMenuLog__StaticFields_DEFINED)
#define IL2CPP_STRUCT_VolatileDebugMenuLog__StaticFields_DEFINED
struct GUIStyle;
struct List_1_System_String_;
struct VolatileDebugMenuLog__StaticFields {
    struct GUIStyle* SelectedStyle;
    struct GUIStyle* Style;
    struct GUIStyle* PressedStyle;
    struct GUIStyle* DebugMenuStyle;
    struct GUIStyle* StyleEnabled;
    struct GUIStyle* StyleDisabled;
    struct List_1_System_String_* m_messages;
};
#endif
#if !defined(IL2CPP_STRUCT_VolatileDebugMenuLog__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_VolatileDebugMenuLog__StaticFields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_VolatileDebugMenuLog__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolatileDebugMenuLog__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_VolatileDebugMenuLog__StaticFields_FWDDECL)
#include <Modloader/app/structs/VolatileDebugMenuLog__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolatileDebugMenuLog__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
