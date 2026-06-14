#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathFollower_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollower_DEFINED)
#include <Modloader/app/structs/PathFollower__Fields.h>
#if defined(IL2CPP_STRUCT_PathFollower__Fields_DEFINED)
#define IL2CPP_STRUCT_PathFollower_DEFINED
struct PathFollower__Class;
struct PathFollower {
    struct PathFollower__Class* klass;
    MonitorData* monitor;
    struct PathFollower__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathFollower_FWDDECL)
#define IL2CPP_STRUCT_PathFollower_FWDDECL
#include <Modloader/app/structs/PathFollower__Class.h>
#endif
#undef IL2CPP_STRUCT_PathFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollower_DEFINED) && !defined(IL2CPP_STRUCT_PathFollower_FWDDECL)
#include <Modloader/app/structs/PathFollower.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathFollower.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
