#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuiChangeContentColor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuiChangeContentColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiChangeContentColor_DEFINED)
#include <Modloader/app/structs/GuiChangeContentColor__Fields.h>
#if defined(IL2CPP_STRUCT_GuiChangeContentColor__Fields_DEFINED)
#define IL2CPP_STRUCT_GuiChangeContentColor_DEFINED
struct GuiChangeContentColor__Class;
struct GuiChangeContentColor {
    struct GuiChangeContentColor__Class* klass;
    MonitorData* monitor;
    struct GuiChangeContentColor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuiChangeContentColor_FWDDECL)
#define IL2CPP_STRUCT_GuiChangeContentColor_FWDDECL
#include <Modloader/app/structs/GuiChangeContentColor__Class.h>
#endif
#undef IL2CPP_STRUCT_GuiChangeContentColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiChangeContentColor_DEFINED) && !defined(IL2CPP_STRUCT_GuiChangeContentColor_FWDDECL)
#include <Modloader/app/structs/GuiChangeContentColor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuiChangeContentColor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
