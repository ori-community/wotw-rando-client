#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasComponentGameObjectFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasComponentGameObjectFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasComponentGameObjectFilter_DEFINED)
#include <Modloader/app/structs/HasComponentGameObjectFilter__Fields.h>
#if defined(IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_HasComponentGameObjectFilter_DEFINED
struct HasComponentGameObjectFilter__Class;
struct HasComponentGameObjectFilter {
    struct HasComponentGameObjectFilter__Class* klass;
    MonitorData* monitor;
    struct HasComponentGameObjectFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasComponentGameObjectFilter_FWDDECL)
#define IL2CPP_STRUCT_HasComponentGameObjectFilter_FWDDECL
#include <Modloader/app/structs/HasComponentGameObjectFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_HasComponentGameObjectFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasComponentGameObjectFilter_DEFINED) && !defined(IL2CPP_STRUCT_HasComponentGameObjectFilter_FWDDECL)
#include <Modloader/app/structs/HasComponentGameObjectFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasComponentGameObjectFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
