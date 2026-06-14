#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestWindowB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestWindowB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindowB__Fields_DEFINED)
#include <Modloader/app/structs/TestWindowB_State__Enum.h>
#include <Modloader/app/structs/Window__Fields.h>
#if defined(IL2CPP_STRUCT_Window__Fields_DEFINED) && defined(IL2CPP_STRUCT_TestWindowB_State__Enum_DEFINED)
#define IL2CPP_STRUCT_TestWindowB__Fields_DEFINED
struct ItemSelectionManager;
struct Button_1;
struct TestWindowB__Fields {
    struct Window__Fields _;
    struct ItemSelectionManager* ItemSelectionManager;
    struct Button_1* ButtonA;
    struct Button_1* ButtonB;
    struct Button_1* ButtonC;
    struct Button_1* ButtonD;
    TestWindowB_State__Enum CurrentState;

    float m_currentStateTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestWindowB__Fields_FWDDECL)
#define IL2CPP_STRUCT_TestWindowB__Fields_FWDDECL
#include <Modloader/app/structs/Button_1.h>
#include <Modloader/app/structs/ItemSelectionManager.h>
#endif
#undef IL2CPP_STRUCT_TestWindowB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindowB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TestWindowB__Fields_FWDDECL)
#include <Modloader/app/structs/TestWindowB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestWindowB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
