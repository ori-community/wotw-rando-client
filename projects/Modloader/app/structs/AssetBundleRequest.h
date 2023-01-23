#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssetBundleRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssetBundleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetBundleRequest_DEFINED)
#include <Modloader/app/structs/AssetBundleRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AssetBundleRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AssetBundleRequest_DEFINED
struct AssetBundleRequest__Class;
struct AssetBundleRequest {
    struct AssetBundleRequest__Class* klass;
    MonitorData* monitor;
    struct AssetBundleRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssetBundleRequest_FWDDECL)
#define IL2CPP_STRUCT_AssetBundleRequest_FWDDECL
#include <Modloader/app/structs/AssetBundleRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AssetBundleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetBundleRequest_DEFINED) && !defined(IL2CPP_STRUCT_AssetBundleRequest_FWDDECL)
#include <Modloader/app/structs/AssetBundleRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssetBundleRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
