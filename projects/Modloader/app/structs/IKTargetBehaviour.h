#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKTargetBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKTargetBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKTargetBehaviour_DEFINED)
#include <Modloader/app/structs/IKTargetBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_IKTargetBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_IKTargetBehaviour_DEFINED
struct IKTargetBehaviour__Class;
struct IKTargetBehaviour {
    struct IKTargetBehaviour__Class* klass;
    MonitorData* monitor;
    struct IKTargetBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKTargetBehaviour_FWDDECL)
#define IL2CPP_STRUCT_IKTargetBehaviour_FWDDECL
#include <Modloader/app/structs/IKTargetBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_IKTargetBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKTargetBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_IKTargetBehaviour_FWDDECL)
#include <Modloader/app/structs/IKTargetBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKTargetBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
