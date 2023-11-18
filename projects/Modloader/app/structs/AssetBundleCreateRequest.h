#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssetBundleCreateRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssetBundleCreateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetBundleCreateRequest_DEFINED)
#include <Modloader/app/structs/AssetBundleCreateRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AssetBundleCreateRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AssetBundleCreateRequest_DEFINED
struct AssetBundleCreateRequest__Class;
struct AssetBundleCreateRequest {
    struct AssetBundleCreateRequest__Class* klass;
    MonitorData* monitor;
    struct AssetBundleCreateRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssetBundleCreateRequest_FWDDECL)
#define IL2CPP_STRUCT_AssetBundleCreateRequest_FWDDECL
#include <Modloader/app/structs/AssetBundleCreateRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AssetBundleCreateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetBundleCreateRequest_DEFINED) && !defined(IL2CPP_STRUCT_AssetBundleCreateRequest_FWDDECL)
#include <Modloader/app/structs/AssetBundleCreateRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssetBundleCreateRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
