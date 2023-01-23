#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RevokeBansRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RevokeBansRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeBansRequest_DEFINED)
#include <Modloader/app/structs/RevokeBansRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RevokeBansRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RevokeBansRequest_DEFINED
struct RevokeBansRequest__Class;
struct RevokeBansRequest {
    struct RevokeBansRequest__Class* klass;
    MonitorData* monitor;
    struct RevokeBansRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RevokeBansRequest_FWDDECL)
#define IL2CPP_STRUCT_RevokeBansRequest_FWDDECL
#include <Modloader/app/structs/RevokeBansRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RevokeBansRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeBansRequest_DEFINED) && !defined(IL2CPP_STRUCT_RevokeBansRequest_FWDDECL)
#include <Modloader/app/structs/RevokeBansRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RevokeBansRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
