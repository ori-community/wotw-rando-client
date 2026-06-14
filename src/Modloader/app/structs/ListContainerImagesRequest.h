#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListContainerImagesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListContainerImagesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListContainerImagesRequest_DEFINED)
#include <Modloader/app/structs/ListContainerImagesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ListContainerImagesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ListContainerImagesRequest_DEFINED
struct ListContainerImagesRequest__Class;
struct ListContainerImagesRequest {
    struct ListContainerImagesRequest__Class* klass;
    MonitorData* monitor;
    struct ListContainerImagesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListContainerImagesRequest_FWDDECL)
#define IL2CPP_STRUCT_ListContainerImagesRequest_FWDDECL
#include <Modloader/app/structs/ListContainerImagesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ListContainerImagesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListContainerImagesRequest_DEFINED) && !defined(IL2CPP_STRUCT_ListContainerImagesRequest_FWDDECL)
#include <Modloader/app/structs/ListContainerImagesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListContainerImagesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
