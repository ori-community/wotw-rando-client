#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Display_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Display_INITIALIZING
#if !defined(IL2CPP_STRUCT_Display_DEFINED)
#include <Modloader/app/structs/Display__Fields.h>
#if defined(IL2CPP_STRUCT_Display__Fields_DEFINED)
#define IL2CPP_STRUCT_Display_DEFINED
struct Display__Class;
struct Display {
    struct Display__Class* klass;
    MonitorData* monitor;
    struct Display__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Display_FWDDECL)
#define IL2CPP_STRUCT_Display_FWDDECL
#include <Modloader/app/structs/Display__Class.h>
#endif
#undef IL2CPP_STRUCT_Display_INITIALIZING
#if !defined(IL2CPP_STRUCT_Display_DEFINED) && !defined(IL2CPP_STRUCT_Display_FWDDECL)
#include <Modloader/app/structs/Display.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Display.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
