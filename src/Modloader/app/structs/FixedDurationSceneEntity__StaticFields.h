#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedDurationSceneEntity__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedDurationSceneEntity__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FixedDurationSceneEntity__StaticFields_DEFINED
struct Int32__Array;
struct String__Array;
struct FixedDurationSceneEntity__StaticFields {
    struct Int32__Array* m_eventIds;
    struct String__Array* m_eventNames;
};
#endif
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FixedDurationSceneEntity__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_FixedDurationSceneEntity__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FixedDurationSceneEntity__StaticFields_FWDDECL)
#include <Modloader/app/structs/FixedDurationSceneEntity__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedDurationSceneEntity__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
