#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuiEnable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuiEnable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiEnable_DEFINED)
#include <Modloader/app/structs/GuiEnable__Fields.h>
#if defined(IL2CPP_STRUCT_GuiEnable__Fields_DEFINED)
#define IL2CPP_STRUCT_GuiEnable_DEFINED
struct GuiEnable__Class;
struct GuiEnable {
    struct GuiEnable__Class* klass;
    MonitorData* monitor;
    struct GuiEnable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuiEnable_FWDDECL)
#define IL2CPP_STRUCT_GuiEnable_FWDDECL
#include <Modloader/app/structs/GuiEnable__Class.h>
#endif
#undef IL2CPP_STRUCT_GuiEnable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiEnable_DEFINED) && !defined(IL2CPP_STRUCT_GuiEnable_FWDDECL)
#include <Modloader/app/structs/GuiEnable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuiEnable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
