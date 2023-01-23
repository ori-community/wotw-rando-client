#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataProviderTest2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataProviderTest2_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProviderTest2_DEFINED)
#include <Modloader/app/structs/DataProviderTest2__Fields.h>
#if defined(IL2CPP_STRUCT_DataProviderTest2__Fields_DEFINED)
#define IL2CPP_STRUCT_DataProviderTest2_DEFINED
struct DataProviderTest2__Class;
struct DataProviderTest2 {
    struct DataProviderTest2__Class* klass;
    MonitorData* monitor;
    struct DataProviderTest2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataProviderTest2_FWDDECL)
#define IL2CPP_STRUCT_DataProviderTest2_FWDDECL
#include <Modloader/app/structs/DataProviderTest2__Class.h>
#endif
#undef IL2CPP_STRUCT_DataProviderTest2_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProviderTest2_DEFINED) && !defined(IL2CPP_STRUCT_DataProviderTest2_FWDDECL)
#include <Modloader/app/structs/DataProviderTest2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataProviderTest2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
