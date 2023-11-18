#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate_DEFINED)
#include <Modloader/app/structs/Display_DisplaysUpdatedDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate_DEFINED
struct Display_DisplaysUpdatedDelegate__Class;
struct Display_DisplaysUpdatedDelegate {
    struct Display_DisplaysUpdatedDelegate__Class* klass;
    MonitorData* monitor;
    struct Display_DisplaysUpdatedDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate_FWDDECL)
#define IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate_FWDDECL
#include <Modloader/app/structs/Display_DisplaysUpdatedDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate_DEFINED) && !defined(IL2CPP_STRUCT_Display_DisplaysUpdatedDelegate_FWDDECL)
#include <Modloader/app/structs/Display_DisplaysUpdatedDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Display_DisplaysUpdatedDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
