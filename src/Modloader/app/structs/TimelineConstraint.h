#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineConstraint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineConstraint_DEFINED)
#include <Modloader/app/structs/TimelineConstraint__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineConstraint__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineConstraint_DEFINED
struct TimelineConstraint__Class;
struct TimelineConstraint {
    struct TimelineConstraint__Class* klass;
    MonitorData* monitor;
    struct TimelineConstraint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineConstraint_FWDDECL)
#define IL2CPP_STRUCT_TimelineConstraint_FWDDECL
#include <Modloader/app/structs/TimelineConstraint__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineConstraint_DEFINED) && !defined(IL2CPP_STRUCT_TimelineConstraint_FWDDECL)
#include <Modloader/app/structs/TimelineConstraint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineConstraint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
