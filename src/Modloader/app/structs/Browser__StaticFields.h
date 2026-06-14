#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Browser__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Browser__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Browser__StaticFields_DEFINED
struct Dictionary_2_System_Int32_List_1_System_Object_;
struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser_;
struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_;
struct Browser__StaticFields {
    int32_t lastUpdateFrame;
    struct Dictionary_2_System_Int32_List_1_System_Object_* allThingsToRemember;
    struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser_* onAnyBrowserCreated;
    struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser_* onAnyBrowserDestroyed;
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_* allBrowsers;
};
#endif
#if !defined(IL2CPP_STRUCT_Browser__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Browser__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_ZenFulcrum_EmbeddedBrowser_Browser_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_List_1_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_.h>
#endif
#undef IL2CPP_STRUCT_Browser__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Browser__StaticFields_FWDDECL)
#include <Modloader/app/structs/Browser__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Browser__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
