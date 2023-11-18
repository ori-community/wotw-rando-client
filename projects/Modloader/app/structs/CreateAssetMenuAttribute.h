#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateAssetMenuAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateAssetMenuAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateAssetMenuAttribute_DEFINED)
#include <Modloader/app/structs/CreateAssetMenuAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_CreateAssetMenuAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateAssetMenuAttribute_DEFINED
struct CreateAssetMenuAttribute__Class;
struct CreateAssetMenuAttribute {
    struct CreateAssetMenuAttribute__Class* klass;
    MonitorData* monitor;
    struct CreateAssetMenuAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateAssetMenuAttribute_FWDDECL)
#define IL2CPP_STRUCT_CreateAssetMenuAttribute_FWDDECL
#include <Modloader/app/structs/CreateAssetMenuAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateAssetMenuAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateAssetMenuAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CreateAssetMenuAttribute_FWDDECL)
#include <Modloader/app/structs/CreateAssetMenuAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateAssetMenuAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
