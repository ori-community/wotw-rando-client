#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildSummary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildSummary_DEFINED)
#include <Modloader/app/structs/BuildSummary__Fields.h>
#if defined(IL2CPP_STRUCT_BuildSummary__Fields_DEFINED)
#define IL2CPP_STRUCT_BuildSummary_DEFINED
struct BuildSummary__Class;
struct BuildSummary {
    struct BuildSummary__Class* klass;
    MonitorData* monitor;
    struct BuildSummary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildSummary_FWDDECL)
#define IL2CPP_STRUCT_BuildSummary_FWDDECL
#include <Modloader/app/structs/BuildSummary__Class.h>
#endif
#undef IL2CPP_STRUCT_BuildSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildSummary_DEFINED) && !defined(IL2CPP_STRUCT_BuildSummary_FWDDECL)
#include <Modloader/app/structs/BuildSummary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildSummary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
