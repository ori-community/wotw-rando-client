#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterGameRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterGameRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterGameRequest_DEFINED)
#include <Modloader/app/structs/RegisterGameRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RegisterGameRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RegisterGameRequest_DEFINED
struct RegisterGameRequest__Class;
struct RegisterGameRequest {
    struct RegisterGameRequest__Class* klass;
    MonitorData* monitor;
    struct RegisterGameRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterGameRequest_FWDDECL)
#define IL2CPP_STRUCT_RegisterGameRequest_FWDDECL
#include <Modloader/app/structs/RegisterGameRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RegisterGameRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterGameRequest_DEFINED) && !defined(IL2CPP_STRUCT_RegisterGameRequest_FWDDECL)
#include <Modloader/app/structs/RegisterGameRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterGameRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
