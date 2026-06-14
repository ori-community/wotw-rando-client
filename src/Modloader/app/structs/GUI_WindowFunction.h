#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUI_WindowFunction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUI_WindowFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUI_WindowFunction_DEFINED)
#include <Modloader/app/structs/GUI_WindowFunction__Fields.h>
#if defined(IL2CPP_STRUCT_GUI_WindowFunction__Fields_DEFINED)
#define IL2CPP_STRUCT_GUI_WindowFunction_DEFINED
struct GUI_WindowFunction__Class;
struct GUI_WindowFunction {
    struct GUI_WindowFunction__Class* klass;
    MonitorData* monitor;
    struct GUI_WindowFunction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUI_WindowFunction_FWDDECL)
#define IL2CPP_STRUCT_GUI_WindowFunction_FWDDECL
#include <Modloader/app/structs/GUI_WindowFunction__Class.h>
#endif
#undef IL2CPP_STRUCT_GUI_WindowFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUI_WindowFunction_DEFINED) && !defined(IL2CPP_STRUCT_GUI_WindowFunction_FWDDECL)
#include <Modloader/app/structs/GUI_WindowFunction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUI_WindowFunction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
