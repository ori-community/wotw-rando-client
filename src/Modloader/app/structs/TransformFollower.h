#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformFollower_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformFollower_DEFINED)
#include <Modloader/app/structs/TransformFollower__Fields.h>
#if defined(IL2CPP_STRUCT_TransformFollower__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformFollower_DEFINED
struct TransformFollower__Class;
struct TransformFollower {
    struct TransformFollower__Class* klass;
    MonitorData* monitor;
    struct TransformFollower__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformFollower_FWDDECL)
#define IL2CPP_STRUCT_TransformFollower_FWDDECL
#include <Modloader/app/structs/TransformFollower__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformFollower_DEFINED) && !defined(IL2CPP_STRUCT_TransformFollower_FWDDECL)
#include <Modloader/app/structs/TransformFollower.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformFollower.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
