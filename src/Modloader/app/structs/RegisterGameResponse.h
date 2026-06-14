#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterGameResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterGameResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterGameResponse_DEFINED)
#include <Modloader/app/structs/RegisterGameResponse__Fields.h>
#if defined(IL2CPP_STRUCT_RegisterGameResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_RegisterGameResponse_DEFINED
struct RegisterGameResponse__Class;
struct RegisterGameResponse {
    struct RegisterGameResponse__Class* klass;
    MonitorData* monitor;
    struct RegisterGameResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterGameResponse_FWDDECL)
#define IL2CPP_STRUCT_RegisterGameResponse_FWDDECL
#include <Modloader/app/structs/RegisterGameResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_RegisterGameResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterGameResponse_DEFINED) && !defined(IL2CPP_STRUCT_RegisterGameResponse_FWDDECL)
#include <Modloader/app/structs/RegisterGameResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterGameResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
