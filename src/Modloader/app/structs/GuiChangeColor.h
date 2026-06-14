#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuiChangeColor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuiChangeColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiChangeColor_DEFINED)
#include <Modloader/app/structs/GuiChangeColor__Fields.h>
#if defined(IL2CPP_STRUCT_GuiChangeColor__Fields_DEFINED)
#define IL2CPP_STRUCT_GuiChangeColor_DEFINED
struct GuiChangeColor__Class;
struct GuiChangeColor {
    struct GuiChangeColor__Class* klass;
    MonitorData* monitor;
    struct GuiChangeColor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuiChangeColor_FWDDECL)
#define IL2CPP_STRUCT_GuiChangeColor_FWDDECL
#include <Modloader/app/structs/GuiChangeColor__Class.h>
#endif
#undef IL2CPP_STRUCT_GuiChangeColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuiChangeColor_DEFINED) && !defined(IL2CPP_STRUCT_GuiChangeColor_FWDDECL)
#include <Modloader/app/structs/GuiChangeColor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuiChangeColor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
