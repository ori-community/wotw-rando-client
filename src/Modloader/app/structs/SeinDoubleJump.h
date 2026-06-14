#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDoubleJump_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDoubleJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoubleJump_DEFINED)
#include <Modloader/app/structs/SeinDoubleJump__Fields.h>
#if defined(IL2CPP_STRUCT_SeinDoubleJump__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDoubleJump_DEFINED
struct SeinDoubleJump__Class;
struct SeinDoubleJump {
    struct SeinDoubleJump__Class* klass;
    MonitorData* monitor;
    struct SeinDoubleJump__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDoubleJump_FWDDECL)
#define IL2CPP_STRUCT_SeinDoubleJump_FWDDECL
#include <Modloader/app/structs/SeinDoubleJump__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinDoubleJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoubleJump_DEFINED) && !defined(IL2CPP_STRUCT_SeinDoubleJump_FWDDECL)
#include <Modloader/app/structs/SeinDoubleJump.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDoubleJump.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
