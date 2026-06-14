#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssetUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssetUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetUtility_DEFINED)
#define IL2CPP_STRUCT_AssetUtility_DEFINED
struct AssetUtility__Class;
struct AssetUtility {
    struct AssetUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AssetUtility_FWDDECL)
#define IL2CPP_STRUCT_AssetUtility_FWDDECL
#include <Modloader/app/structs/AssetUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_AssetUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetUtility_DEFINED) && !defined(IL2CPP_STRUCT_AssetUtility_FWDDECL)
#include <Modloader/app/structs/AssetUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssetUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
