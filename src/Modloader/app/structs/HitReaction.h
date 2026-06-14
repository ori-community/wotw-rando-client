#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_DEFINED)
#include <Modloader/app/structs/HitReaction__Fields.h>
#if defined(IL2CPP_STRUCT_HitReaction__Fields_DEFINED)
#define IL2CPP_STRUCT_HitReaction_DEFINED
struct HitReaction__Class;
struct HitReaction {
    struct HitReaction__Class* klass;
    MonitorData* monitor;
    struct HitReaction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReaction_FWDDECL)
#define IL2CPP_STRUCT_HitReaction_FWDDECL
#include <Modloader/app/structs/HitReaction__Class.h>
#endif
#undef IL2CPP_STRUCT_HitReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_DEFINED) && !defined(IL2CPP_STRUCT_HitReaction_FWDDECL)
#include <Modloader/app/structs/HitReaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
