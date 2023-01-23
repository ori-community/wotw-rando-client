#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PredicateWait_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PredicateWait_INITIALIZING
#if !defined(IL2CPP_STRUCT_PredicateWait_DEFINED)
#include <Modloader/app/structs/PredicateWait__Fields.h>
#if defined(IL2CPP_STRUCT_PredicateWait__Fields_DEFINED)
#define IL2CPP_STRUCT_PredicateWait_DEFINED
struct PredicateWait__Class;
struct PredicateWait {
    struct PredicateWait__Class* klass;
    MonitorData* monitor;
    struct PredicateWait__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PredicateWait_FWDDECL)
#define IL2CPP_STRUCT_PredicateWait_FWDDECL
#include <Modloader/app/structs/PredicateWait__Class.h>
#endif
#undef IL2CPP_STRUCT_PredicateWait_INITIALIZING
#if !defined(IL2CPP_STRUCT_PredicateWait_DEFINED) && !defined(IL2CPP_STRUCT_PredicateWait_FWDDECL)
#include <Modloader/app/structs/PredicateWait.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PredicateWait.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
