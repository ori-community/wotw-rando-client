#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoGUIMessage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoGUIMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoGUIMessage__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_DemoGUIMessage__Fields_DEFINED
struct String;
struct DemoGUIMessage__Fields {
    struct MonoBehaviour__Fields _;
    struct String* text;
    struct Color color;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DemoGUIMessage__Fields_FWDDECL)
#define IL2CPP_STRUCT_DemoGUIMessage__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DemoGUIMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoGUIMessage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DemoGUIMessage__Fields_FWDDECL)
#include <Modloader/app/structs/DemoGUIMessage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoGUIMessage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
