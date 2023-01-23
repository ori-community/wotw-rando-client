#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxControllerStateChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxControllerStateChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerStateChangedEventArgs_DEFINED)
#include <Modloader/app/structs/XboxControllerStateChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxControllerStateChangedEventArgs_DEFINED
struct XboxControllerStateChangedEventArgs__Class;
struct XboxControllerStateChangedEventArgs {
    struct XboxControllerStateChangedEventArgs__Class* klass;
    MonitorData* monitor;
    struct XboxControllerStateChangedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxControllerStateChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_XboxControllerStateChangedEventArgs_FWDDECL
#include <Modloader/app/structs/XboxControllerStateChangedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxControllerStateChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerStateChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_XboxControllerStateChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/XboxControllerStateChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxControllerStateChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
