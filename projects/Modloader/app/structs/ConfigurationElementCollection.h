#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigurationElementCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigurationElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationElementCollection_DEFINED)
#define IL2CPP_STRUCT_ConfigurationElementCollection_DEFINED
struct ConfigurationElementCollection__Class;
struct ConfigurationElementCollection {
    struct ConfigurationElementCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConfigurationElementCollection_FWDDECL)
#define IL2CPP_STRUCT_ConfigurationElementCollection_FWDDECL
#include <Modloader/app/structs/ConfigurationElementCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigurationElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationElementCollection_DEFINED) && !defined(IL2CPP_STRUCT_ConfigurationElementCollection_FWDDECL)
#include <Modloader/app/structs/ConfigurationElementCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigurationElementCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
