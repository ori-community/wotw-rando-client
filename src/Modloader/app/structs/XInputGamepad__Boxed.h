#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XInputGamepad__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XInputGamepad__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputGamepad__Boxed_DEFINED)
#include <Modloader/app/structs/XInputGamepad.h>
#if defined(IL2CPP_STRUCT_XInputGamepad_DEFINED)
#define IL2CPP_STRUCT_XInputGamepad__Boxed_DEFINED
struct XInputGamepad__Class;
struct XInputGamepad__Boxed {
    struct XInputGamepad__Class* klass;
    MonitorData* monitor;
    struct XInputGamepad fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XInputGamepad__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XInputGamepad__Boxed_FWDDECL
#include <Modloader/app/structs/XInputGamepad__Class.h>
#endif
#undef IL2CPP_STRUCT_XInputGamepad__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputGamepad__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XInputGamepad__Boxed_FWDDECL)
#include <Modloader/app/structs/XInputGamepad__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XInputGamepad__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
