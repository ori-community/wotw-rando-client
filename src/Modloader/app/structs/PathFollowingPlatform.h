#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathFollowingPlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathFollowingPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollowingPlatform_DEFINED)
#include <Modloader/app/structs/PathFollowingPlatform__Fields.h>
#if defined(IL2CPP_STRUCT_PathFollowingPlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_PathFollowingPlatform_DEFINED
struct PathFollowingPlatform__Class;
struct PathFollowingPlatform {
    struct PathFollowingPlatform__Class* klass;
    MonitorData* monitor;
    struct PathFollowingPlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathFollowingPlatform_FWDDECL)
#define IL2CPP_STRUCT_PathFollowingPlatform_FWDDECL
#include <Modloader/app/structs/PathFollowingPlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_PathFollowingPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollowingPlatform_DEFINED) && !defined(IL2CPP_STRUCT_PathFollowingPlatform_FWDDECL)
#include <Modloader/app/structs/PathFollowingPlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathFollowingPlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
