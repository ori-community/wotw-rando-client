#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinObjectFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinObjectFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinObjectFilter_DEFINED)
#include <Modloader/app/structs/SeinObjectFilter__Fields.h>
#if defined(IL2CPP_STRUCT_SeinObjectFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinObjectFilter_DEFINED
struct SeinObjectFilter__Class;
struct SeinObjectFilter {
    struct SeinObjectFilter__Class* klass;
    MonitorData* monitor;
    struct SeinObjectFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinObjectFilter_FWDDECL)
#define IL2CPP_STRUCT_SeinObjectFilter_FWDDECL
#include <Modloader/app/structs/SeinObjectFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinObjectFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinObjectFilter_DEFINED) && !defined(IL2CPP_STRUCT_SeinObjectFilter_FWDDECL)
#include <Modloader/app/structs/SeinObjectFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinObjectFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
