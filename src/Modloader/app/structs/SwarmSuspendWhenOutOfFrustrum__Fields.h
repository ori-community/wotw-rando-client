#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmSuspendWhenOutOfFrustrum__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmSuspendWhenOutOfFrustrum__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmSuspendWhenOutOfFrustrum__Fields_DEFINED)
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__Fields.h>
#if defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmSuspendWhenOutOfFrustrum__Fields_DEFINED
struct SwarmEntity;
struct SwarmSuspendWhenOutOfFrustrum__Fields {
    struct SuspendWhenOutOfFrustrum__Fields _;
    struct SwarmEntity* Entity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmSuspendWhenOutOfFrustrum__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmSuspendWhenOutOfFrustrum__Fields_FWDDECL
#include <Modloader/app/structs/SwarmEntity.h>
#endif
#undef IL2CPP_STRUCT_SwarmSuspendWhenOutOfFrustrum__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmSuspendWhenOutOfFrustrum__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmSuspendWhenOutOfFrustrum__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmSuspendWhenOutOfFrustrum__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmSuspendWhenOutOfFrustrum__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
