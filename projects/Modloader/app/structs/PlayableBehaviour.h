#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableBehaviour_DEFINED)
#define IL2CPP_STRUCT_PlayableBehaviour_DEFINED
struct PlayableBehaviour__Class;
struct PlayableBehaviour {
    struct PlayableBehaviour__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayableBehaviour_FWDDECL)
#define IL2CPP_STRUCT_PlayableBehaviour_FWDDECL
#include <Modloader/app/structs/PlayableBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayableBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_PlayableBehaviour_FWDDECL)
#include <Modloader/app/structs/PlayableBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
