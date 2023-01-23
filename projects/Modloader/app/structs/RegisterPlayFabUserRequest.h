#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterPlayFabUserRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterPlayFabUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserRequest_DEFINED)
#include <Modloader/app/structs/RegisterPlayFabUserRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RegisterPlayFabUserRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RegisterPlayFabUserRequest_DEFINED
struct RegisterPlayFabUserRequest__Class;
struct RegisterPlayFabUserRequest {
    struct RegisterPlayFabUserRequest__Class* klass;
    MonitorData* monitor;
    struct RegisterPlayFabUserRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserRequest_FWDDECL)
#define IL2CPP_STRUCT_RegisterPlayFabUserRequest_FWDDECL
#include <Modloader/app/structs/RegisterPlayFabUserRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RegisterPlayFabUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserRequest_DEFINED) && !defined(IL2CPP_STRUCT_RegisterPlayFabUserRequest_FWDDECL)
#include <Modloader/app/structs/RegisterPlayFabUserRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterPlayFabUserRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
