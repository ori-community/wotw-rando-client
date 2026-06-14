#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_WebProxy__Fields_DEFINED
struct Uri;
struct ArrayList;
struct ICredentials;
struct Regex__Array;
struct Hashtable;
struct AutoWebProxyScriptEngine;
struct __declspec(align(8)) WebProxy__Fields {
    bool _UseRegistry;
    bool _BypassOnLocal;
    bool m_EnableAutoproxy;
    struct Uri* _ProxyAddress;
    struct ArrayList* _BypassList;
    struct ICredentials* _Credentials;
    struct Regex__Array* _RegExBypassList;
    struct Hashtable* _ProxyHostAddresses;
    struct AutoWebProxyScriptEngine* m_ScriptEngine;
};
#endif
#if !defined(IL2CPP_STRUCT_WebProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebProxy__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/AutoWebProxyScriptEngine.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/Regex__Array.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_WebProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebProxy__Fields_FWDDECL)
#include <Modloader/app/structs/WebProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
