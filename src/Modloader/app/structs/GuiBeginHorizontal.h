#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuiBeginHorizontal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuiBeginHorizontal_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiBeginHorizontal_DEFINED)
#define IL2CPP_STRUCT_GuiBeginHorizontal_DEFINED
struct GuiBeginHorizontal__Class;
struct GuiBeginHorizontal {
    struct GuiBeginHorizontal__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GuiBeginHorizontal_FWDDECL)
#define IL2CPP_STRUCT_GuiBeginHorizontal_FWDDECL
#include <Modloader/app/structs/GuiBeginHorizontal__Class.h>
#endif
#undef IL2CPP_STRUCT_GuiBeginHorizontal_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiBeginHorizontal_DEFINED) && !defined(IL2CPP_STRUCT_GuiBeginHorizontal_FWDDECL)
#include <Modloader/app/structs/GuiBeginHorizontal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuiBeginHorizontal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
