#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuiBeginScrollView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuiBeginScrollView_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiBeginScrollView_DEFINED)
#include <Modloader/app/structs/GuiBeginScrollView__Fields.h>
#if defined(IL2CPP_STRUCT_GuiBeginScrollView__Fields_DEFINED)
#define IL2CPP_STRUCT_GuiBeginScrollView_DEFINED
struct GuiBeginScrollView__Class;
struct GuiBeginScrollView {
    struct GuiBeginScrollView__Class* klass;
    MonitorData* monitor;
    struct GuiBeginScrollView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuiBeginScrollView_FWDDECL)
#define IL2CPP_STRUCT_GuiBeginScrollView_FWDDECL
#include <Modloader/app/structs/GuiBeginScrollView__Class.h>
#endif
#undef IL2CPP_STRUCT_GuiBeginScrollView_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiBeginScrollView_DEFINED) && !defined(IL2CPP_STRUCT_GuiBeginScrollView_FWDDECL)
#include <Modloader/app/structs/GuiBeginScrollView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuiBeginScrollView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
