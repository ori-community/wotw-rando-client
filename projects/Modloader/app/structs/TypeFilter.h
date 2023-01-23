#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeFilter_DEFINED)
#include <Modloader/app/structs/TypeFilter__Fields.h>
#if defined(IL2CPP_STRUCT_TypeFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeFilter_DEFINED
struct TypeFilter__Class;
struct TypeFilter {
    struct TypeFilter__Class* klass;
    MonitorData* monitor;
    struct TypeFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeFilter_FWDDECL)
#define IL2CPP_STRUCT_TypeFilter_FWDDECL
#include <Modloader/app/structs/TypeFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeFilter_DEFINED) && !defined(IL2CPP_STRUCT_TypeFilter_FWDDECL)
#include <Modloader/app/structs/TypeFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
