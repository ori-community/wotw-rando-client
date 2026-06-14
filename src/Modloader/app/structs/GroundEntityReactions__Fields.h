#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundEntityReactions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundEntityReactions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEntityReactions__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactions__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactions__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundEntityReactions__Fields_DEFINED
struct EntityReactionBehaviour;
struct GroundEntityReactions__Fields {
    struct EntityReactions__Fields _;
    struct EntityReactionBehaviour* FallBehaviour;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundEntityReactions__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundEntityReactions__Fields_FWDDECL
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#endif
#undef IL2CPP_STRUCT_GroundEntityReactions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEntityReactions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundEntityReactions__Fields_FWDDECL)
#include <Modloader/app/structs/GroundEntityReactions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundEntityReactions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
