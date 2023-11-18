#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Thread__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Thread__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Thread__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Thread__StaticFields_DEFINED
struct LocalDataStoreMgr;
struct LocalDataStoreHolder;
struct CultureInfo;
struct AsyncLocal_1_System_Globalization_CultureInfo_;
struct Thread;
struct Thread__StaticFields {
    struct LocalDataStoreMgr* s_LocalDataStoreMgr;
    struct LocalDataStoreHolder* s_LocalDataStore;
    struct CultureInfo* m_CurrentCulture;
    struct CultureInfo* m_CurrentUICulture;
    struct AsyncLocal_1_System_Globalization_CultureInfo_* s_asyncLocalCurrentCulture;
    struct AsyncLocal_1_System_Globalization_CultureInfo_* s_asyncLocalCurrentUICulture;
    struct Thread* current_thread;
};
#endif
#if !defined(IL2CPP_STRUCT_Thread__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Thread__StaticFields_FWDDECL
#include <Modloader/app/structs/AsyncLocal_1_System_Globalization_CultureInfo_.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/LocalDataStoreHolder.h>
#include <Modloader/app/structs/LocalDataStoreMgr.h>
#include <Modloader/app/structs/Thread.h>
#endif
#undef IL2CPP_STRUCT_Thread__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Thread__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Thread__StaticFields_FWDDECL)
#include <Modloader/app/structs/Thread__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Thread__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
