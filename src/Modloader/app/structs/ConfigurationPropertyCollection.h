#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigurationPropertyCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigurationPropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationPropertyCollection_DEFINED)
#define IL2CPP_STRUCT_ConfigurationPropertyCollection_DEFINED
struct ConfigurationPropertyCollection__Class;
struct ConfigurationPropertyCollection {
    struct ConfigurationPropertyCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConfigurationPropertyCollection_FWDDECL)
#define IL2CPP_STRUCT_ConfigurationPropertyCollection_FWDDECL
#include <Modloader/app/structs/ConfigurationPropertyCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigurationPropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationPropertyCollection_DEFINED) && !defined(IL2CPP_STRUCT_ConfigurationPropertyCollection_FWDDECL)
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
