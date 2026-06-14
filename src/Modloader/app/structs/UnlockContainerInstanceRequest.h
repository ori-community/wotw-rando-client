#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlockContainerInstanceRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlockContainerInstanceRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockContainerInstanceRequest_DEFINED)
#include <Modloader/app/structs/UnlockContainerInstanceRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UnlockContainerInstanceRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlockContainerInstanceRequest_DEFINED
struct UnlockContainerInstanceRequest__Class;
struct UnlockContainerInstanceRequest {
    struct UnlockContainerInstanceRequest__Class* klass;
    MonitorData* monitor;
    struct UnlockContainerInstanceRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlockContainerInstanceRequest_FWDDECL)
#define IL2CPP_STRUCT_UnlockContainerInstanceRequest_FWDDECL
#include <Modloader/app/structs/UnlockContainerInstanceRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlockContainerInstanceRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockContainerInstanceRequest_DEFINED) && !defined(IL2CPP_STRUCT_UnlockContainerInstanceRequest_FWDDECL)
#include <Modloader/app/structs/UnlockContainerInstanceRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlockContainerInstanceRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
