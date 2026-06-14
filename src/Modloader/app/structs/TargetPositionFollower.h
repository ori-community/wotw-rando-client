#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetPositionFollower_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetPositionFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetPositionFollower_DEFINED)
#include <Modloader/app/structs/TargetPositionFollower__Fields.h>
#if defined(IL2CPP_STRUCT_TargetPositionFollower__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetPositionFollower_DEFINED
struct TargetPositionFollower__Class;
struct TargetPositionFollower {
    struct TargetPositionFollower__Class* klass;
    MonitorData* monitor;
    struct TargetPositionFollower__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetPositionFollower_FWDDECL)
#define IL2CPP_STRUCT_TargetPositionFollower_FWDDECL
#include <Modloader/app/structs/TargetPositionFollower__Class.h>
#endif
#undef IL2CPP_STRUCT_TargetPositionFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetPositionFollower_DEFINED) && !defined(IL2CPP_STRUCT_TargetPositionFollower_FWDDECL)
#include <Modloader/app/structs/TargetPositionFollower.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetPositionFollower.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
