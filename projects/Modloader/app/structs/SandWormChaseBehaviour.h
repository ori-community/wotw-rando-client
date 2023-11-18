#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormChaseBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormChaseBehaviour_DEFINED)
#include <Modloader/app/structs/SandWormChaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormChaseBehaviour_DEFINED
struct SandWormChaseBehaviour__Class;
struct SandWormChaseBehaviour {
    struct SandWormChaseBehaviour__Class* klass;
    MonitorData* monitor;
    struct SandWormChaseBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormChaseBehaviour_FWDDECL)
#define IL2CPP_STRUCT_SandWormChaseBehaviour_FWDDECL
#include <Modloader/app/structs/SandWormChaseBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_SandWormChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormChaseBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_SandWormChaseBehaviour_FWDDECL)
#include <Modloader/app/structs/SandWormChaseBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormChaseBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
