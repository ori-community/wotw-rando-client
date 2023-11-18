#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListArgumentProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListArgumentProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListArgumentProvider_DEFINED)
#include <Modloader/app/structs/ListArgumentProvider__Fields.h>
#if defined(IL2CPP_STRUCT_ListArgumentProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ListArgumentProvider_DEFINED
struct ListArgumentProvider__Class;
struct ListArgumentProvider {
    struct ListArgumentProvider__Class* klass;
    MonitorData* monitor;
    struct ListArgumentProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListArgumentProvider_FWDDECL)
#define IL2CPP_STRUCT_ListArgumentProvider_FWDDECL
#include <Modloader/app/structs/ListArgumentProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ListArgumentProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListArgumentProvider_DEFINED) && !defined(IL2CPP_STRUCT_ListArgumentProvider_FWDDECL)
#include <Modloader/app/structs/ListArgumentProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListArgumentProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
