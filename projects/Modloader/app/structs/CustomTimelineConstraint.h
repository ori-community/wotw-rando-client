#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomTimelineConstraint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomTimelineConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomTimelineConstraint_DEFINED)
#include <Modloader/app/structs/CustomTimelineConstraint__Fields.h>
#if defined(IL2CPP_STRUCT_CustomTimelineConstraint__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomTimelineConstraint_DEFINED
struct CustomTimelineConstraint__Class;
struct CustomTimelineConstraint {
    struct CustomTimelineConstraint__Class* klass;
    MonitorData* monitor;
    struct CustomTimelineConstraint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomTimelineConstraint_FWDDECL)
#define IL2CPP_STRUCT_CustomTimelineConstraint_FWDDECL
#include <Modloader/app/structs/CustomTimelineConstraint__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomTimelineConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomTimelineConstraint_DEFINED) && !defined(IL2CPP_STRUCT_CustomTimelineConstraint_FWDDECL)
#include <Modloader/app/structs/CustomTimelineConstraint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomTimelineConstraint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
