#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProvider_DEFINED)
#include <Modloader/app/structs/DataProvider__Fields.h>
#if defined(IL2CPP_STRUCT_DataProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DataProvider_DEFINED
struct DataProvider__Class;
struct DataProvider {
    struct DataProvider__Class* klass;
    MonitorData* monitor;
    struct DataProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataProvider_FWDDECL)
#define IL2CPP_STRUCT_DataProvider_FWDDECL
#include <Modloader/app/structs/DataProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_DataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProvider_DEFINED) && !defined(IL2CPP_STRUCT_DataProvider_FWDDECL)
#include <Modloader/app/structs/DataProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
