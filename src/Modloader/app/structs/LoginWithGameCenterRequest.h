#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithGameCenterRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithGameCenterRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithGameCenterRequest_DEFINED)
#include <Modloader/app/structs/LoginWithGameCenterRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithGameCenterRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithGameCenterRequest_DEFINED
struct LoginWithGameCenterRequest__Class;
struct LoginWithGameCenterRequest {
    struct LoginWithGameCenterRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithGameCenterRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithGameCenterRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithGameCenterRequest_FWDDECL
#include <Modloader/app/structs/LoginWithGameCenterRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithGameCenterRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithGameCenterRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithGameCenterRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithGameCenterRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithGameCenterRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
