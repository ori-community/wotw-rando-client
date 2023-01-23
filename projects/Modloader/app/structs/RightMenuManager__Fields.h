#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RightMenuManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RightMenuManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RightMenuManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RightMenuManager__Fields_DEFINED
struct Button_1;
struct Action;
struct RightMenuManager__Fields {
    struct MonoBehaviour__Fields _;
    struct Button_1* ButtonA;
    struct Button_1* ButtonB;
    struct Button_1* ButtonC;
    struct Button_1* ButtonD;
    struct Action* ToggleMenuCallback;
    struct Action* SwitchWindowCallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RightMenuManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_RightMenuManager__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Button_1.h>
#endif
#undef IL2CPP_STRUCT_RightMenuManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RightMenuManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RightMenuManager__Fields_FWDDECL)
#include <Modloader/app/structs/RightMenuManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RightMenuManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
