#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallBehaviour_DEFINED)
#include <Modloader/app/structs/FallBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_FallBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FallBehaviour_DEFINED
struct FallBehaviour__Class;
struct FallBehaviour {
    struct FallBehaviour__Class* klass;
    MonitorData* monitor;
    struct FallBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallBehaviour_FWDDECL)
#define IL2CPP_STRUCT_FallBehaviour_FWDDECL
#include <Modloader/app/structs/FallBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_FallBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_FallBehaviour_FWDDECL)
#include <Modloader/app/structs/FallBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
