#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFilter_DEFINED)
#define IL2CPP_STRUCT_IFilter_DEFINED
struct IFilter__Class;
struct IFilter {
    struct IFilter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFilter_FWDDECL)
#define IL2CPP_STRUCT_IFilter_FWDDECL
#include <Modloader/app/structs/IFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_IFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFilter_DEFINED) && !defined(IL2CPP_STRUCT_IFilter_FWDDECL)
#include <Modloader/app/structs/IFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
