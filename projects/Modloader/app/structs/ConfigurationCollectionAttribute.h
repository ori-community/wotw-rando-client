#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigurationCollectionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigurationCollectionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationCollectionAttribute_DEFINED)
#define IL2CPP_STRUCT_ConfigurationCollectionAttribute_DEFINED
struct ConfigurationCollectionAttribute__Class;
struct ConfigurationCollectionAttribute {
    struct ConfigurationCollectionAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConfigurationCollectionAttribute_FWDDECL)
#define IL2CPP_STRUCT_ConfigurationCollectionAttribute_FWDDECL
#include <Modloader/app/structs/ConfigurationCollectionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigurationCollectionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationCollectionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ConfigurationCollectionAttribute_FWDDECL)
#include <Modloader/app/structs/ConfigurationCollectionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigurationCollectionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
