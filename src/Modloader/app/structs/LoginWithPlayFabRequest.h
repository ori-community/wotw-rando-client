#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithPlayFabRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithPlayFabRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithPlayFabRequest_DEFINED)
#include <Modloader/app/structs/LoginWithPlayFabRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithPlayFabRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithPlayFabRequest_DEFINED
struct LoginWithPlayFabRequest__Class;
struct LoginWithPlayFabRequest {
    struct LoginWithPlayFabRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithPlayFabRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithPlayFabRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithPlayFabRequest_FWDDECL
#include <Modloader/app/structs/LoginWithPlayFabRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithPlayFabRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithPlayFabRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithPlayFabRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithPlayFabRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithPlayFabRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
