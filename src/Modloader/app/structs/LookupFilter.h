#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookupFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookupFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupFilter_DEFINED)
#include <Modloader/app/structs/LookupFilter__Fields.h>
#if defined(IL2CPP_STRUCT_LookupFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_LookupFilter_DEFINED
struct LookupFilter__Class;
struct LookupFilter {
    struct LookupFilter__Class* klass;
    MonitorData* monitor;
    struct LookupFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LookupFilter_FWDDECL)
#define IL2CPP_STRUCT_LookupFilter_FWDDECL
#include <Modloader/app/structs/LookupFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_LookupFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupFilter_DEFINED) && !defined(IL2CPP_STRUCT_LookupFilter_FWDDECL)
#include <Modloader/app/structs/LookupFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookupFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
