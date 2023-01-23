#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundEntityReactions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundEntityReactions_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEntityReactions_DEFINED)
#include <Modloader/app/structs/GroundEntityReactions__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEntityReactions__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundEntityReactions_DEFINED
struct GroundEntityReactions__Class;
struct GroundEntityReactions {
    struct GroundEntityReactions__Class* klass;
    MonitorData* monitor;
    struct GroundEntityReactions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundEntityReactions_FWDDECL)
#define IL2CPP_STRUCT_GroundEntityReactions_FWDDECL
#include <Modloader/app/structs/GroundEntityReactions__Class.h>
#endif
#undef IL2CPP_STRUCT_GroundEntityReactions_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEntityReactions_DEFINED) && !defined(IL2CPP_STRUCT_GroundEntityReactions_FWDDECL)
#include <Modloader/app/structs/GroundEntityReactions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundEntityReactions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
