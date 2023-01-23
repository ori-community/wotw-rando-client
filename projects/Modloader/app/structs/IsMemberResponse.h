#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsMemberResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsMemberResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsMemberResponse_DEFINED)
#include <Modloader/app/structs/IsMemberResponse__Fields.h>
#if defined(IL2CPP_STRUCT_IsMemberResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_IsMemberResponse_DEFINED
struct IsMemberResponse__Class;
struct IsMemberResponse {
    struct IsMemberResponse__Class* klass;
    MonitorData* monitor;
    struct IsMemberResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsMemberResponse_FWDDECL)
#define IL2CPP_STRUCT_IsMemberResponse_FWDDECL
#include <Modloader/app/structs/IsMemberResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_IsMemberResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsMemberResponse_DEFINED) && !defined(IL2CPP_STRUCT_IsMemberResponse_FWDDECL)
#include <Modloader/app/structs/IsMemberResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsMemberResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
