#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigurationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigurationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationException_DEFINED)
#include <Modloader/app/structs/ConfigurationException__Fields.h>
#if defined(IL2CPP_STRUCT_ConfigurationException__Fields_DEFINED)
#define IL2CPP_STRUCT_ConfigurationException_DEFINED
struct ConfigurationException__Class;
struct ConfigurationException {
    struct ConfigurationException__Class* klass;
    MonitorData* monitor;
    struct ConfigurationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConfigurationException_FWDDECL)
#define IL2CPP_STRUCT_ConfigurationException_FWDDECL
#include <Modloader/app/structs/ConfigurationException__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigurationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationException_DEFINED) && !defined(IL2CPP_STRUCT_ConfigurationException_FWDDECL)
#include <Modloader/app/structs/ConfigurationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigurationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
