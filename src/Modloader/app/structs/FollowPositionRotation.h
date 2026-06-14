#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FollowPositionRotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FollowPositionRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowPositionRotation_DEFINED)
#include <Modloader/app/structs/FollowPositionRotation__Fields.h>
#if defined(IL2CPP_STRUCT_FollowPositionRotation__Fields_DEFINED)
#define IL2CPP_STRUCT_FollowPositionRotation_DEFINED
struct FollowPositionRotation__Class;
struct FollowPositionRotation {
    struct FollowPositionRotation__Class* klass;
    MonitorData* monitor;
    struct FollowPositionRotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FollowPositionRotation_FWDDECL)
#define IL2CPP_STRUCT_FollowPositionRotation_FWDDECL
#include <Modloader/app/structs/FollowPositionRotation__Class.h>
#endif
#undef IL2CPP_STRUCT_FollowPositionRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowPositionRotation_DEFINED) && !defined(IL2CPP_STRUCT_FollowPositionRotation_FWDDECL)
#include <Modloader/app/structs/FollowPositionRotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FollowPositionRotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
