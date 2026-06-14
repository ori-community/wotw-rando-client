#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssetSummary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssetSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetSummary_DEFINED)
#include <Modloader/app/structs/AssetSummary__Fields.h>
#if defined(IL2CPP_STRUCT_AssetSummary__Fields_DEFINED)
#define IL2CPP_STRUCT_AssetSummary_DEFINED
struct AssetSummary__Class;
struct AssetSummary {
    struct AssetSummary__Class* klass;
    MonitorData* monitor;
    struct AssetSummary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssetSummary_FWDDECL)
#define IL2CPP_STRUCT_AssetSummary_FWDDECL
#include <Modloader/app/structs/AssetSummary__Class.h>
#endif
#undef IL2CPP_STRUCT_AssetSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetSummary_DEFINED) && !defined(IL2CPP_STRUCT_AssetSummary_FWDDECL)
#include <Modloader/app/structs/AssetSummary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssetSummary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
