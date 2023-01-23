#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuiBeginArea_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuiBeginArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiBeginArea_DEFINED)
#define IL2CPP_STRUCT_GuiBeginArea_DEFINED
struct GuiBeginArea__Class;
struct GuiBeginArea {
    struct GuiBeginArea__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GuiBeginArea_FWDDECL)
#define IL2CPP_STRUCT_GuiBeginArea_FWDDECL
#include <Modloader/app/structs/GuiBeginArea__Class.h>
#endif
#undef IL2CPP_STRUCT_GuiBeginArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiBeginArea_DEFINED) && !defined(IL2CPP_STRUCT_GuiBeginArea_FWDDECL)
#include <Modloader/app/structs/GuiBeginArea.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuiBeginArea.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
