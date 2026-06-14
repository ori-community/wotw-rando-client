#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PatrolBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PatrolBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_PatrolBehaviour_DEFINED)
#include <Modloader/app/structs/PatrolBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PatrolBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PatrolBehaviour_DEFINED
struct PatrolBehaviour__Class;
struct PatrolBehaviour {
    struct PatrolBehaviour__Class* klass;
    MonitorData* monitor;
    struct PatrolBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PatrolBehaviour_FWDDECL)
#define IL2CPP_STRUCT_PatrolBehaviour_FWDDECL
#include <Modloader/app/structs/PatrolBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_PatrolBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_PatrolBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_PatrolBehaviour_FWDDECL)
#include <Modloader/app/structs/PatrolBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PatrolBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
