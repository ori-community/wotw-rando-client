#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIUtility__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIUtility__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GUIUtility__StaticFields_DEFINED
struct Action;
struct Func_3_Int32_IntPtr_Boolean_;
struct Func_2_Exception_Boolean_;
struct GUIUtility__StaticFields {
    int32_t s_SkinMode;
    int32_t s_OriginalID;
    struct Action* takeCapture;
    struct Action* releaseCapture;
    struct Func_3_Int32_IntPtr_Boolean_* processEvent;
    struct Func_2_Exception_Boolean_* endContainerGUIFromException;
    struct Action* enabledStateChanged;
    bool _guiIsExiting_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIUtility__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GUIUtility__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_2_Exception_Boolean_.h>
#include <Modloader/app/structs/Func_3_Int32_IntPtr_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_GUIUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIUtility__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GUIUtility__StaticFields_FWDDECL)
#include <Modloader/app/structs/GUIUtility__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIUtility__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
