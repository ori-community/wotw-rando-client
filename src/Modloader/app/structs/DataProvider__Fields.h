#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DataProvider__Fields_DEFINED
struct String;
struct IServiceSynchronizer;
struct IPlatformStorageEventHandler;
struct List_1_SystemIntegration_CacheData_;
struct __declspec(align(8)) DataProvider__Fields {
    bool m_firstTime;
    struct String* m_sourceKey;
    struct IServiceSynchronizer* m_serviceSynchronizer;
    struct IPlatformStorageEventHandler* m_platformStorageEventHandler;
    struct List_1_SystemIntegration_CacheData_* m_localData;
};
#endif
#if !defined(IL2CPP_STRUCT_DataProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataProvider__Fields_FWDDECL
#include <Modloader/app/structs/IPlatformStorageEventHandler.h>
#include <Modloader/app/structs/IServiceSynchronizer.h>
#include <Modloader/app/structs/List_1_SystemIntegration_CacheData_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataProvider__Fields_FWDDECL)
#include <Modloader/app/structs/DataProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
