#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveToBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveToBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveToBehaviour_DEFINED)
#include <Modloader/app/structs/MoveToBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MoveToBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MoveToBehaviour_DEFINED
struct MoveToBehaviour__Class;
struct MoveToBehaviour {
    struct MoveToBehaviour__Class* klass;
    MonitorData* monitor;
    struct MoveToBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveToBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MoveToBehaviour_FWDDECL
#include <Modloader/app/structs/MoveToBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MoveToBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveToBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MoveToBehaviour_FWDDECL)
#include <Modloader/app/structs/MoveToBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveToBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
