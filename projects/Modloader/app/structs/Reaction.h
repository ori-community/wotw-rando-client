#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Reaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Reaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_Reaction_DEFINED)
#include <Modloader/app/structs/EntityId.h>
#if defined(IL2CPP_STRUCT_EntityId_DEFINED)
#define IL2CPP_STRUCT_Reaction_DEFINED
struct ITimelineEntityParent;
struct TimelineEntityRecord;
struct Reaction {
    struct EntityId EntityId;
    float TimeOffset;
    int32_t EventId;
    struct ITimelineEntityParent* Scope;
    struct TimelineEntityRecord* Record;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Reaction_FWDDECL)
#define IL2CPP_STRUCT_Reaction_FWDDECL
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#endif
#undef IL2CPP_STRUCT_Reaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_Reaction_DEFINED) && !defined(IL2CPP_STRUCT_Reaction_FWDDECL)
#include <Modloader/app/structs/Reaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Reaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
