#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReaction_HitPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReaction_HitPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPoint_DEFINED)
#include <Modloader/app/structs/HitReaction_HitPoint__Fields.h>
#if defined(IL2CPP_STRUCT_HitReaction_HitPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_HitReaction_HitPoint_DEFINED
struct HitReaction_HitPoint__Class;
struct HitReaction_HitPoint {
    struct HitReaction_HitPoint__Class* klass;
    MonitorData* monitor;
    struct HitReaction_HitPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReaction_HitPoint_FWDDECL)
#define IL2CPP_STRUCT_HitReaction_HitPoint_FWDDECL
#include <Modloader/app/structs/HitReaction_HitPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_HitReaction_HitPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPoint_DEFINED) && !defined(IL2CPP_STRUCT_HitReaction_HitPoint_FWDDECL)
#include <Modloader/app/structs/HitReaction_HitPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReaction_HitPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
