#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnectionGroup_ConnectionState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnectionGroup_ConnectionState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionGroup_ConnectionState_DEFINED)
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Fields.h>
#if defined(IL2CPP_STRUCT_WebConnectionGroup_ConnectionState__Fields_DEFINED)
#define IL2CPP_STRUCT_WebConnectionGroup_ConnectionState_DEFINED
struct WebConnectionGroup_ConnectionState__Class;
struct WebConnectionGroup_ConnectionState {
    struct WebConnectionGroup_ConnectionState__Class* klass;
    MonitorData* monitor;
    struct WebConnectionGroup_ConnectionState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebConnectionGroup_ConnectionState_FWDDECL)
#define IL2CPP_STRUCT_WebConnectionGroup_ConnectionState_FWDDECL
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Class.h>
#endif
#undef IL2CPP_STRUCT_WebConnectionGroup_ConnectionState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionGroup_ConnectionState_DEFINED) && !defined(IL2CPP_STRUCT_WebConnectionGroup_ConnectionState_FWDDECL)
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
