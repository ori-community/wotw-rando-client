#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplicationState__Enum__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplicationState__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationState__Enum__Boxed_DEFINED)
#include <Modloader/app/structs/ApplicationState__Enum.h>
#if defined(IL2CPP_STRUCT_ApplicationState__Enum_DEFINED)
#define IL2CPP_STRUCT_ApplicationState__Enum__Boxed_DEFINED
struct ApplicationState__Enum__Class;
struct ApplicationState__Enum__Boxed {
    struct ApplicationState__Enum__Class* klass;
    MonitorData* monitor;
    ApplicationState__Enum value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplicationState__Enum__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ApplicationState__Enum__Boxed_FWDDECL
#include <Modloader/app/structs/ApplicationState__Enum__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplicationState__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationState__Enum__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ApplicationState__Enum__Boxed_FWDDECL)
#include <Modloader/app/structs/ApplicationState__Enum__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplicationState__Enum__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
