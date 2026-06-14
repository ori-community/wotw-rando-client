#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigurationElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigurationElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationElement_DEFINED)
#define IL2CPP_STRUCT_ConfigurationElement_DEFINED
struct ConfigurationElement__Class;
struct ConfigurationElement {
    struct ConfigurationElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConfigurationElement_FWDDECL)
#define IL2CPP_STRUCT_ConfigurationElement_FWDDECL
#include <Modloader/app/structs/ConfigurationElement__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigurationElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationElement_DEFINED) && !defined(IL2CPP_STRUCT_ConfigurationElement_FWDDECL)
#include <Modloader/app/structs/ConfigurationElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigurationElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
