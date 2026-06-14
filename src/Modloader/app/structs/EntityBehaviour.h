#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviour_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityBehaviour_DEFINED
struct EntityBehaviour__Class;
struct EntityBehaviour {
    struct EntityBehaviour__Class* klass;
    MonitorData* monitor;
    struct EntityBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityBehaviour_FWDDECL)
#define IL2CPP_STRUCT_EntityBehaviour_FWDDECL
#include <Modloader/app/structs/EntityBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_EntityBehaviour_FWDDECL)
#include <Modloader/app/structs/EntityBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
