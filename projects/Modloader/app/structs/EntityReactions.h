#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityReactions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityReactions_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityReactions_DEFINED)
#include <Modloader/app/structs/EntityReactions__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactions__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityReactions_DEFINED
struct EntityReactions__Class;
struct EntityReactions {
    struct EntityReactions__Class* klass;
    MonitorData* monitor;
    struct EntityReactions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityReactions_FWDDECL)
#define IL2CPP_STRUCT_EntityReactions_FWDDECL
#include <Modloader/app/structs/EntityReactions__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityReactions_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityReactions_DEFINED) && !defined(IL2CPP_STRUCT_EntityReactions_FWDDECL)
#include <Modloader/app/structs/EntityReactions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityReactions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
