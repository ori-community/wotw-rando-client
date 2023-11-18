#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsMemberRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsMemberRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsMemberRequest_DEFINED)
#include <Modloader/app/structs/IsMemberRequest__Fields.h>
#if defined(IL2CPP_STRUCT_IsMemberRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_IsMemberRequest_DEFINED
struct IsMemberRequest__Class;
struct IsMemberRequest {
    struct IsMemberRequest__Class* klass;
    MonitorData* monitor;
    struct IsMemberRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsMemberRequest_FWDDECL)
#define IL2CPP_STRUCT_IsMemberRequest_FWDDECL
#include <Modloader/app/structs/IsMemberRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_IsMemberRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsMemberRequest_DEFINED) && !defined(IL2CPP_STRUCT_IsMemberRequest_FWDDECL)
#include <Modloader/app/structs/IsMemberRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsMemberRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
