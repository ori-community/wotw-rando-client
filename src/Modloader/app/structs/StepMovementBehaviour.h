#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StepMovementBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StepMovementBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StepMovementBehaviour_DEFINED)
#include <Modloader/app/structs/StepMovementBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_StepMovementBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StepMovementBehaviour_DEFINED
struct StepMovementBehaviour__Class;
struct StepMovementBehaviour {
    struct StepMovementBehaviour__Class* klass;
    MonitorData* monitor;
    struct StepMovementBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StepMovementBehaviour_FWDDECL)
#define IL2CPP_STRUCT_StepMovementBehaviour_FWDDECL
#include <Modloader/app/structs/StepMovementBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_StepMovementBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StepMovementBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_StepMovementBehaviour_FWDDECL)
#include <Modloader/app/structs/StepMovementBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StepMovementBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
