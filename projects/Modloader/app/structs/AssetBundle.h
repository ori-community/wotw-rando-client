#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssetBundle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssetBundle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetBundle_DEFINED)
#include <Modloader/app/structs/AssetBundle__Fields.h>
#if defined(IL2CPP_STRUCT_AssetBundle__Fields_DEFINED)
#define IL2CPP_STRUCT_AssetBundle_DEFINED
struct AssetBundle__Class;
struct AssetBundle {
    struct AssetBundle__Class* klass;
    MonitorData* monitor;
    struct AssetBundle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssetBundle_FWDDECL)
#define IL2CPP_STRUCT_AssetBundle_FWDDECL
#include <Modloader/app/structs/AssetBundle__Class.h>
#endif
#undef IL2CPP_STRUCT_AssetBundle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetBundle_DEFINED) && !defined(IL2CPP_STRUCT_AssetBundle_FWDDECL)
#include <Modloader/app/structs/AssetBundle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssetBundle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
