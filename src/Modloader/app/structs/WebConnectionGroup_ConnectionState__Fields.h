#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_DEFINED
struct WebConnection;
struct WebConnectionGroup;
struct __declspec(align(8)) WebConnectionGroup_ConnectionState__Fields {
    struct WebConnection* _Connection_k__BackingField;
    struct WebConnectionGroup* _Group_k__BackingField;
    bool busy;
    struct DateTime idleSince;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_FWDDECL
#include <Modloader/app/structs/WebConnection.h>
#include <Modloader/app/structs/WebConnectionGroup.h>
#endif
#undef IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_FWDDECL)
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
