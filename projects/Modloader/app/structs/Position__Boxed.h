#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Position__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Position__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Position__Boxed_DEFINED)
#include <Modloader/app/structs/Position.h>
#if defined(IL2CPP_STRUCT_Position_DEFINED)
#define IL2CPP_STRUCT_Position__Boxed_DEFINED
struct Position__Class;
struct Position__Boxed {
    struct Position__Class* klass;
    MonitorData* monitor;
    struct Position fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Position__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Position__Boxed_FWDDECL
#include <Modloader/app/structs/Position__Class.h>
#endif
#undef IL2CPP_STRUCT_Position__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Position__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Position__Boxed_FWDDECL)
#include <Modloader/app/structs/Position__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Position__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
