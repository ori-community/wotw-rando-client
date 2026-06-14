#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWallDangle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWallDangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallDangle_DEFINED)
#include <Modloader/app/structs/SeinWallDangle__Fields.h>
#if defined(IL2CPP_STRUCT_SeinWallDangle__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWallDangle_DEFINED
struct SeinWallDangle__Class;
struct SeinWallDangle {
    struct SeinWallDangle__Class* klass;
    MonitorData* monitor;
    struct SeinWallDangle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWallDangle_FWDDECL)
#define IL2CPP_STRUCT_SeinWallDangle_FWDDECL
#include <Modloader/app/structs/SeinWallDangle__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinWallDangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallDangle_DEFINED) && !defined(IL2CPP_STRUCT_SeinWallDangle_FWDDECL)
#include <Modloader/app/structs/SeinWallDangle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWallDangle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
