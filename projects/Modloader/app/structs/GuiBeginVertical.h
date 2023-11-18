#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuiBeginVertical_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuiBeginVertical_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiBeginVertical_DEFINED)
#define IL2CPP_STRUCT_GuiBeginVertical_DEFINED
struct GuiBeginVertical__Class;
struct GuiBeginVertical {
    struct GuiBeginVertical__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GuiBeginVertical_FWDDECL)
#define IL2CPP_STRUCT_GuiBeginVertical_FWDDECL
#include <Modloader/app/structs/GuiBeginVertical__Class.h>
#endif
#undef IL2CPP_STRUCT_GuiBeginVertical_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiBeginVertical_DEFINED) && !defined(IL2CPP_STRUCT_GuiBeginVertical_FWDDECL)
#include <Modloader/app/structs/GuiBeginVertical.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuiBeginVertical.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
