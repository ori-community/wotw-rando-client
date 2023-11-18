#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddPlayerTagRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddPlayerTagRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddPlayerTagRequest_DEFINED)
#include <Modloader/app/structs/AddPlayerTagRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AddPlayerTagRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AddPlayerTagRequest_DEFINED
struct AddPlayerTagRequest__Class;
struct AddPlayerTagRequest {
    struct AddPlayerTagRequest__Class* klass;
    MonitorData* monitor;
    struct AddPlayerTagRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddPlayerTagRequest_FWDDECL)
#define IL2CPP_STRUCT_AddPlayerTagRequest_FWDDECL
#include <Modloader/app/structs/AddPlayerTagRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AddPlayerTagRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddPlayerTagRequest_DEFINED) && !defined(IL2CPP_STRUCT_AddPlayerTagRequest_FWDDECL)
#include <Modloader/app/structs/AddPlayerTagRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddPlayerTagRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
