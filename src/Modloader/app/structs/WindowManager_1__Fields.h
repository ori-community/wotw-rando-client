#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowManager_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowManager_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowManager_1__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WindowManager_1__Fields_DEFINED
struct List_1_Moon_UI_Window_;
struct HashSet_1_Moon_ISuspendable_;
struct WindowManager_1__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_Moon_UI_Window_* m_windowsQueue;
    int32_t m_inputBlockingWindowCount;
    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowManager_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindowManager_1__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_Moon_UI_Window_.h>
#endif
#undef IL2CPP_STRUCT_WindowManager_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowManager_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindowManager_1__Fields_FWDDECL)
#include <Modloader/app/structs/WindowManager_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowManager_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
