#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaceTargetBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaceTargetBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaceTargetBehaviour_DEFINED)
#include <Modloader/app/structs/FaceTargetBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_FaceTargetBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FaceTargetBehaviour_DEFINED
struct FaceTargetBehaviour__Class;
struct FaceTargetBehaviour {
    struct FaceTargetBehaviour__Class* klass;
    MonitorData* monitor;
    struct FaceTargetBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaceTargetBehaviour_FWDDECL)
#define IL2CPP_STRUCT_FaceTargetBehaviour_FWDDECL
#include <Modloader/app/structs/FaceTargetBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_FaceTargetBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaceTargetBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_FaceTargetBehaviour_FWDDECL)
#include <Modloader/app/structs/FaceTargetBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaceTargetBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
