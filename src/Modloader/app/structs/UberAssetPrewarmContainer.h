#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberAssetPrewarmContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberAssetPrewarmContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAssetPrewarmContainer_DEFINED)
#include <Modloader/app/structs/UberAssetPrewarmContainer__Fields.h>
#if defined(IL2CPP_STRUCT_UberAssetPrewarmContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_UberAssetPrewarmContainer_DEFINED
struct UberAssetPrewarmContainer__Class;
struct UberAssetPrewarmContainer {
    struct UberAssetPrewarmContainer__Class* klass;
    MonitorData* monitor;
    struct UberAssetPrewarmContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberAssetPrewarmContainer_FWDDECL)
#define IL2CPP_STRUCT_UberAssetPrewarmContainer_FWDDECL
#include <Modloader/app/structs/UberAssetPrewarmContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_UberAssetPrewarmContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAssetPrewarmContainer_DEFINED) && !defined(IL2CPP_STRUCT_UberAssetPrewarmContainer_FWDDECL)
#include <Modloader/app/structs/UberAssetPrewarmContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberAssetPrewarmContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
