#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataProviderTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataProviderTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProviderTest_DEFINED)
#include <Modloader/app/structs/DataProviderTest__Fields.h>
#if defined(IL2CPP_STRUCT_DataProviderTest__Fields_DEFINED)
#define IL2CPP_STRUCT_DataProviderTest_DEFINED
struct DataProviderTest__Class;
struct DataProviderTest {
    struct DataProviderTest__Class* klass;
    MonitorData* monitor;
    struct DataProviderTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataProviderTest_FWDDECL)
#define IL2CPP_STRUCT_DataProviderTest_FWDDECL
#include <Modloader/app/structs/DataProviderTest__Class.h>
#endif
#undef IL2CPP_STRUCT_DataProviderTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProviderTest_DEFINED) && !defined(IL2CPP_STRUCT_DataProviderTest_FWDDECL)
#include <Modloader/app/structs/DataProviderTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataProviderTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
