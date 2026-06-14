#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderAsset_DEFINED)
#include <Modloader/app/structs/RecorderAsset__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderAsset_DEFINED
struct RecorderAsset__Class;
struct RecorderAsset {
    struct RecorderAsset__Class* klass;
    MonitorData* monitor;
    struct RecorderAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderAsset_FWDDECL)
#define IL2CPP_STRUCT_RecorderAsset_FWDDECL
#include <Modloader/app/structs/RecorderAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderAsset_DEFINED) && !defined(IL2CPP_STRUCT_RecorderAsset_FWDDECL)
#include <Modloader/app/structs/RecorderAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
