#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinJump_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJump_DEFINED)
#include <Modloader/app/structs/SeinJump__Fields.h>
#if defined(IL2CPP_STRUCT_SeinJump__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinJump_DEFINED
struct SeinJump__Class;
struct SeinJump {
    struct SeinJump__Class* klass;
    MonitorData* monitor;
    struct SeinJump__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinJump_FWDDECL)
#define IL2CPP_STRUCT_SeinJump_FWDDECL
#include <Modloader/app/structs/SeinJump__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJump_DEFINED) && !defined(IL2CPP_STRUCT_SeinJump_FWDDECL)
#include <Modloader/app/structs/SeinJump.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinJump.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
