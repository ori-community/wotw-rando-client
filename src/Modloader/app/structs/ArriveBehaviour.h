#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArriveBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArriveBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArriveBehaviour_DEFINED)
#include <Modloader/app/structs/ArriveBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ArriveBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ArriveBehaviour_DEFINED
struct ArriveBehaviour__Class;
struct ArriveBehaviour {
    struct ArriveBehaviour__Class* klass;
    MonitorData* monitor;
    struct ArriveBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArriveBehaviour_FWDDECL)
#define IL2CPP_STRUCT_ArriveBehaviour_FWDDECL
#include <Modloader/app/structs/ArriveBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_ArriveBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArriveBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_ArriveBehaviour_FWDDECL)
#include <Modloader/app/structs/ArriveBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArriveBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
