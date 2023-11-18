#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuiChangeBackgroundColor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuiChangeBackgroundColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiChangeBackgroundColor_DEFINED)
#include <Modloader/app/structs/GuiChangeBackgroundColor__Fields.h>
#if defined(IL2CPP_STRUCT_GuiChangeBackgroundColor__Fields_DEFINED)
#define IL2CPP_STRUCT_GuiChangeBackgroundColor_DEFINED
struct GuiChangeBackgroundColor__Class;
struct GuiChangeBackgroundColor {
    struct GuiChangeBackgroundColor__Class* klass;
    MonitorData* monitor;
    struct GuiChangeBackgroundColor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuiChangeBackgroundColor_FWDDECL)
#define IL2CPP_STRUCT_GuiChangeBackgroundColor_FWDDECL
#include <Modloader/app/structs/GuiChangeBackgroundColor__Class.h>
#endif
#undef IL2CPP_STRUCT_GuiChangeBackgroundColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiChangeBackgroundColor_DEFINED) && !defined(IL2CPP_STRUCT_GuiChangeBackgroundColor_FWDDECL)
#include <Modloader/app/structs/GuiChangeBackgroundColor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuiChangeBackgroundColor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
