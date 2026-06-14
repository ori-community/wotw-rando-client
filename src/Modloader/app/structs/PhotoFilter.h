#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhotoFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhotoFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhotoFilter_DEFINED)
#include <Modloader/app/structs/PhotoFilter__Fields.h>
#if defined(IL2CPP_STRUCT_PhotoFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_PhotoFilter_DEFINED
struct PhotoFilter__Class;
struct PhotoFilter {
    struct PhotoFilter__Class* klass;
    MonitorData* monitor;
    struct PhotoFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhotoFilter_FWDDECL)
#define IL2CPP_STRUCT_PhotoFilter_FWDDECL
#include <Modloader/app/structs/PhotoFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_PhotoFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhotoFilter_DEFINED) && !defined(IL2CPP_STRUCT_PhotoFilter_FWDDECL)
#include <Modloader/app/structs/PhotoFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhotoFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
