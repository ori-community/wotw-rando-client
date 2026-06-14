#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtensionDataSetter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtensionDataSetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtensionDataSetter_DEFINED)
#include <Modloader/app/structs/ExtensionDataSetter__Fields.h>
#if defined(IL2CPP_STRUCT_ExtensionDataSetter__Fields_DEFINED)
#define IL2CPP_STRUCT_ExtensionDataSetter_DEFINED
struct ExtensionDataSetter__Class;
struct ExtensionDataSetter {
    struct ExtensionDataSetter__Class* klass;
    MonitorData* monitor;
    struct ExtensionDataSetter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExtensionDataSetter_FWDDECL)
#define IL2CPP_STRUCT_ExtensionDataSetter_FWDDECL
#include <Modloader/app/structs/ExtensionDataSetter__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtensionDataSetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtensionDataSetter_DEFINED) && !defined(IL2CPP_STRUCT_ExtensionDataSetter_FWDDECL)
#include <Modloader/app/structs/ExtensionDataSetter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtensionDataSetter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
