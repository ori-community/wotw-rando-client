#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWallJump_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWallJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallJump_DEFINED)
#include <Modloader/app/structs/SeinWallJump__Fields.h>
#if defined(IL2CPP_STRUCT_SeinWallJump__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWallJump_DEFINED
struct SeinWallJump__Class;
struct SeinWallJump {
    struct SeinWallJump__Class* klass;
    MonitorData* monitor;
    struct SeinWallJump__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWallJump_FWDDECL)
#define IL2CPP_STRUCT_SeinWallJump_FWDDECL
#include <Modloader/app/structs/SeinWallJump__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinWallJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallJump_DEFINED) && !defined(IL2CPP_STRUCT_SeinWallJump_FWDDECL)
#include <Modloader/app/structs/SeinWallJump.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWallJump.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
