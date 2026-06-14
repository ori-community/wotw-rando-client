#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovementBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovementBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovementBehaviour_DEFINED)
#include <Modloader/app/structs/MovementBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MovementBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MovementBehaviour_DEFINED
struct MovementBehaviour__Class;
struct MovementBehaviour {
    struct MovementBehaviour__Class* klass;
    MonitorData* monitor;
    struct MovementBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovementBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MovementBehaviour_FWDDECL
#include <Modloader/app/structs/MovementBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MovementBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovementBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MovementBehaviour_FWDDECL)
#include <Modloader/app/structs/MovementBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovementBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
