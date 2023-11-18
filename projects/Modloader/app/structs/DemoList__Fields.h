#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoList__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DemoList__Fields_DEFINED
struct List_1_System_String_;
struct Browser;
struct DemoList__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_System_String_* demoSites;
    struct Browser* demoBrowser;
    struct Browser* panelBrowser;
    int32_t currentIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DemoList__Fields_FWDDECL)
#define IL2CPP_STRUCT_DemoList__Fields_FWDDECL
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_DemoList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DemoList__Fields_FWDDECL)
#include <Modloader/app/structs/DemoList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
