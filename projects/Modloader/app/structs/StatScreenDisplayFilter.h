#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatScreenDisplayFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatScreenDisplayFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatScreenDisplayFilter_DEFINED)
#include <Modloader/app/structs/StatScreenDisplayFilter__Fields.h>
#if defined(IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_StatScreenDisplayFilter_DEFINED
struct StatScreenDisplayFilter__Class;
struct StatScreenDisplayFilter {
    struct StatScreenDisplayFilter__Class* klass;
    MonitorData* monitor;
    struct StatScreenDisplayFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatScreenDisplayFilter_FWDDECL)
#define IL2CPP_STRUCT_StatScreenDisplayFilter_FWDDECL
#include <Modloader/app/structs/StatScreenDisplayFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_StatScreenDisplayFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatScreenDisplayFilter_DEFINED) && !defined(IL2CPP_STRUCT_StatScreenDisplayFilter_FWDDECL)
#include <Modloader/app/structs/StatScreenDisplayFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatScreenDisplayFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
