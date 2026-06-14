#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestWindow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestWindow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindow__Fields_DEFINED)
#include <Modloader/app/structs/TestWindow_State__Enum.h>
#include <Modloader/app/structs/Window__Fields.h>
#if defined(IL2CPP_STRUCT_Window__Fields_DEFINED) && defined(IL2CPP_STRUCT_TestWindow_State__Enum_DEFINED)
#define IL2CPP_STRUCT_TestWindow__Fields_DEFINED
struct LeftMenuManager;
struct ItemSelectionManager;
struct RightMenuManager;
struct TestWindow__Fields {
    struct Window__Fields _;
    struct LeftMenuManager* LeftMenuManager;
    struct ItemSelectionManager* LeftItemSelectionManager;
    struct RightMenuManager* RightMenuManager;
    struct ItemSelectionManager* RightItemSelectionManager;
    TestWindow_State__Enum CurrentState;

    float m_currentStateTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestWindow__Fields_FWDDECL)
#define IL2CPP_STRUCT_TestWindow__Fields_FWDDECL
#include <Modloader/app/structs/ItemSelectionManager.h>
#include <Modloader/app/structs/LeftMenuManager.h>
#include <Modloader/app/structs/RightMenuManager.h>
#endif
#undef IL2CPP_STRUCT_TestWindow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TestWindow__Fields_FWDDECL)
#include <Modloader/app/structs/TestWindow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestWindow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
