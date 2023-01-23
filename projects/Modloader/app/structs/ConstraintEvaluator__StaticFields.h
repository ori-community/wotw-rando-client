#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintEvaluator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintEvaluator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintEvaluator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ConstraintEvaluator__StaticFields_DEFINED
struct IConstraintEntityCache;
struct List_1_Moon_Timeline_IEventDescriptor_;
struct ConstraintEvaluator__StaticFields {
    struct IConstraintEntityCache* m_cache;
    struct List_1_Moon_Timeline_IEventDescriptor_* m_events;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstraintEvaluator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ConstraintEvaluator__StaticFields_FWDDECL
#include <Modloader/app/structs/IConstraintEntityCache.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_IEventDescriptor_.h>
#endif
#undef IL2CPP_STRUCT_ConstraintEvaluator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintEvaluator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintEvaluator__StaticFields_FWDDECL)
#include <Modloader/app/structs/ConstraintEvaluator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintEvaluator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
