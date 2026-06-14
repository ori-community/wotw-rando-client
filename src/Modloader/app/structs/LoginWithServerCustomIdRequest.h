#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithServerCustomIdRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithServerCustomIdRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithServerCustomIdRequest_DEFINED)
#include <Modloader/app/structs/LoginWithServerCustomIdRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithServerCustomIdRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithServerCustomIdRequest_DEFINED
struct LoginWithServerCustomIdRequest__Class;
struct LoginWithServerCustomIdRequest {
    struct LoginWithServerCustomIdRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithServerCustomIdRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithServerCustomIdRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithServerCustomIdRequest_FWDDECL
#include <Modloader/app/structs/LoginWithServerCustomIdRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithServerCustomIdRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithServerCustomIdRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithServerCustomIdRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithServerCustomIdRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithServerCustomIdRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
