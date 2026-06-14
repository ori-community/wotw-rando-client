#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListParameterProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListParameterProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListParameterProvider_DEFINED)
#include <Modloader/app/structs/ListParameterProvider__Fields.h>
#if defined(IL2CPP_STRUCT_ListParameterProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ListParameterProvider_DEFINED
struct ListParameterProvider__Class;
struct ListParameterProvider {
    struct ListParameterProvider__Class* klass;
    MonitorData* monitor;
    struct ListParameterProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListParameterProvider_FWDDECL)
#define IL2CPP_STRUCT_ListParameterProvider_FWDDECL
#include <Modloader/app/structs/ListParameterProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ListParameterProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListParameterProvider_DEFINED) && !defined(IL2CPP_STRUCT_ListParameterProvider_FWDDECL)
#include <Modloader/app/structs/ListParameterProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListParameterProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
