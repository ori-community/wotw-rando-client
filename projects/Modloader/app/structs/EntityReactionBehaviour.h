#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityReactionBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityReactionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityReactionBehaviour_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityReactionBehaviour_DEFINED
struct EntityReactionBehaviour__Class;
struct EntityReactionBehaviour {
    struct EntityReactionBehaviour__Class* klass;
    MonitorData* monitor;
    struct EntityReactionBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityReactionBehaviour_FWDDECL)
#define IL2CPP_STRUCT_EntityReactionBehaviour_FWDDECL
#include <Modloader/app/structs/EntityReactionBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityReactionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityReactionBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_EntityReactionBehaviour_FWDDECL)
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
