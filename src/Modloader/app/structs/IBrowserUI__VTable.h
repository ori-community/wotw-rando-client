#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBrowserUI__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBrowserUI__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBrowserUI__VTable_DEFINED)
#define IL2CPP_STRUCT_IBrowserUI__VTable_DEFINED
struct IBrowserUI__VTable {
    VirtualInvokeData InputUpdate;
    VirtualInvokeData get_MouseHasFocus;
    VirtualInvokeData get_MousePosition;
    VirtualInvokeData get_MouseButtons;
    VirtualInvokeData get_MouseScroll;
    VirtualInvokeData get_KeyboardHasFocus;
    VirtualInvokeData get_KeyEvents;
    VirtualInvokeData get_BrowserCursor;
    VirtualInvokeData get_InputSettings;
};
#endif
#if !defined(IL2CPP_STRUCT_IBrowserUI__VTable_FWDDECL)
#define IL2CPP_STRUCT_IBrowserUI__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IBrowserUI__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBrowserUI__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IBrowserUI__VTable_FWDDECL)
#include <Modloader/app/structs/IBrowserUI__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBrowserUI__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
