#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XInputState__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XInputState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputState__Boxed_DEFINED)
#include <Modloader/app/structs/XInputState.h>
#if defined(IL2CPP_STRUCT_XInputState_DEFINED)
#define IL2CPP_STRUCT_XInputState__Boxed_DEFINED
struct XInputState__Class;
struct XInputState__Boxed {
    struct XInputState__Class* klass;
    MonitorData* monitor;
    struct XInputState fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XInputState__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XInputState__Boxed_FWDDECL
#include <Modloader/app/structs/XInputState__Class.h>
#endif
#undef IL2CPP_STRUCT_XInputState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputState__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XInputState__Boxed_FWDDECL)
#include <Modloader/app/structs/XInputState__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XInputState__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
