#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpBehaviour_DEFINED)
#include <Modloader/app/structs/JumpBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_JumpBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_JumpBehaviour_DEFINED
struct JumpBehaviour__Class;
struct JumpBehaviour {
    struct JumpBehaviour__Class* klass;
    MonitorData* monitor;
    struct JumpBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpBehaviour_FWDDECL)
#define IL2CPP_STRUCT_JumpBehaviour_FWDDECL
#include <Modloader/app/structs/JumpBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_JumpBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_JumpBehaviour_FWDDECL)
#include <Modloader/app/structs/JumpBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
