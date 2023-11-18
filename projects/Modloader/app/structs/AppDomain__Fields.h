#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppDomain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppDomain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomain__Fields_DEFINED)
#include <Modloader/app/structs/MarshalByRefObject__Fields.h>
#if defined(IL2CPP_STRUCT_MarshalByRefObject__Fields_DEFINED)
#define IL2CPP_STRUCT_AppDomain__Fields_DEFINED
struct Object;
struct AssemblyLoadEventHandler;
struct ResolveEventHandler;
struct EventHandler;
struct UnhandledExceptionEventHandler;
struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs_;
struct List_1_System_String_;
struct AppDomain__Fields {
    struct MarshalByRefObject__Fields _;
    void* _mono_app_domain;
    struct Object* _evidence;
    struct Object* _granted;
    int32_t _principalPolicy;
    struct AssemblyLoadEventHandler* AssemblyLoad;
    struct ResolveEventHandler* AssemblyResolve;
    struct EventHandler* DomainUnload;
    struct EventHandler* ProcessExit;
    struct ResolveEventHandler* ResourceResolve;
    struct ResolveEventHandler* TypeResolve;
    struct UnhandledExceptionEventHandler* UnhandledException;
    struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs_* FirstChanceException;
    struct Object* _domain_manager;
    struct ResolveEventHandler* ReflectionOnlyAssemblyResolve;
    struct Object* _activation;
    struct Object* _applicationIdentity;
    struct List_1_System_String_* compatibility_switch;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AppDomain__Fields_FWDDECL)
#define IL2CPP_STRUCT_AppDomain__Fields_FWDDECL
#include <Modloader/app/structs/AssemblyLoadEventHandler.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ResolveEventHandler.h>
#include <Modloader/app/structs/UnhandledExceptionEventHandler.h>
#endif
#undef IL2CPP_STRUCT_AppDomain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AppDomain__Fields_FWDDECL)
#include <Modloader/app/structs/AppDomain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppDomain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
