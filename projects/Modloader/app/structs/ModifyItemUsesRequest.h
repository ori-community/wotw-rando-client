#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifyItemUsesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifyItemUsesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifyItemUsesRequest_DEFINED)
#include <Modloader/app/structs/ModifyItemUsesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ModifyItemUsesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ModifyItemUsesRequest_DEFINED
struct ModifyItemUsesRequest__Class;
struct ModifyItemUsesRequest {
    struct ModifyItemUsesRequest__Class* klass;
    MonitorData* monitor;
    struct ModifyItemUsesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModifyItemUsesRequest_FWDDECL)
#define IL2CPP_STRUCT_ModifyItemUsesRequest_FWDDECL
#include <Modloader/app/structs/ModifyItemUsesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ModifyItemUsesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifyItemUsesRequest_DEFINED) && !defined(IL2CPP_STRUCT_ModifyItemUsesRequest_FWDDECL)
#include <Modloader/app/structs/ModifyItemUsesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifyItemUsesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
