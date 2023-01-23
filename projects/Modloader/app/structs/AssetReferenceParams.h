#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssetReferenceParams_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssetReferenceParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetReferenceParams_DEFINED)
#include <Modloader/app/structs/AssetReferenceParams__Fields.h>
#if defined(IL2CPP_STRUCT_AssetReferenceParams__Fields_DEFINED)
#define IL2CPP_STRUCT_AssetReferenceParams_DEFINED
struct AssetReferenceParams__Class;
struct AssetReferenceParams {
    struct AssetReferenceParams__Class* klass;
    MonitorData* monitor;
    struct AssetReferenceParams__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssetReferenceParams_FWDDECL)
#define IL2CPP_STRUCT_AssetReferenceParams_FWDDECL
#include <Modloader/app/structs/AssetReferenceParams__Class.h>
#endif
#undef IL2CPP_STRUCT_AssetReferenceParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetReferenceParams_DEFINED) && !defined(IL2CPP_STRUCT_AssetReferenceParams_FWDDECL)
#include <Modloader/app/structs/AssetReferenceParams.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssetReferenceParams.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
