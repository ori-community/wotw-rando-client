#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RobustPredicates_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RobustPredicates_INITIALIZING
#if !defined(IL2CPP_STRUCT_RobustPredicates_DEFINED)
#include <Modloader/app/structs/RobustPredicates__Fields.h>
#if defined(IL2CPP_STRUCT_RobustPredicates__Fields_DEFINED)
#define IL2CPP_STRUCT_RobustPredicates_DEFINED
struct RobustPredicates__Class;
struct RobustPredicates {
    struct RobustPredicates__Class* klass;
    MonitorData* monitor;
    struct RobustPredicates__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RobustPredicates_FWDDECL)
#define IL2CPP_STRUCT_RobustPredicates_FWDDECL
#include <Modloader/app/structs/RobustPredicates__Class.h>
#endif
#undef IL2CPP_STRUCT_RobustPredicates_INITIALIZING
#if !defined(IL2CPP_STRUCT_RobustPredicates_DEFINED) && !defined(IL2CPP_STRUCT_RobustPredicates_FWDDECL)
#include <Modloader/app/structs/RobustPredicates.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RobustPredicates.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
