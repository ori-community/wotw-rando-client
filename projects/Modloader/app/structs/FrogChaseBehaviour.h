#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogChaseBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogChaseBehaviour_DEFINED)
#include <Modloader/app/structs/FrogChaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_FrogChaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FrogChaseBehaviour_DEFINED
struct FrogChaseBehaviour__Class;
struct FrogChaseBehaviour {
    struct FrogChaseBehaviour__Class* klass;
    MonitorData* monitor;
    struct FrogChaseBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogChaseBehaviour_FWDDECL)
#define IL2CPP_STRUCT_FrogChaseBehaviour_FWDDECL
#include <Modloader/app/structs/FrogChaseBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_FrogChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogChaseBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_FrogChaseBehaviour_FWDDECL)
#include <Modloader/app/structs/FrogChaseBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogChaseBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
