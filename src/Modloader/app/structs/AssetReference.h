#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssetReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssetReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetReference_DEFINED)
#include <Modloader/app/structs/AssetReference__Fields.h>
#if defined(IL2CPP_STRUCT_AssetReference__Fields_DEFINED)
#define IL2CPP_STRUCT_AssetReference_DEFINED
struct AssetReference__Class;
struct AssetReference {
    struct AssetReference__Class* klass;
    MonitorData* monitor;
    struct AssetReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssetReference_FWDDECL)
#define IL2CPP_STRUCT_AssetReference_FWDDECL
#include <Modloader/app/structs/AssetReference__Class.h>
#endif
#undef IL2CPP_STRUCT_AssetReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetReference_DEFINED) && !defined(IL2CPP_STRUCT_AssetReference_FWDDECL)
#include <Modloader/app/structs/AssetReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssetReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
