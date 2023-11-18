#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtensionDataGetter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtensionDataGetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtensionDataGetter_DEFINED)
#include <Modloader/app/structs/ExtensionDataGetter__Fields.h>
#if defined(IL2CPP_STRUCT_ExtensionDataGetter__Fields_DEFINED)
#define IL2CPP_STRUCT_ExtensionDataGetter_DEFINED
struct ExtensionDataGetter__Class;
struct ExtensionDataGetter {
    struct ExtensionDataGetter__Class* klass;
    MonitorData* monitor;
    struct ExtensionDataGetter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExtensionDataGetter_FWDDECL)
#define IL2CPP_STRUCT_ExtensionDataGetter_FWDDECL
#include <Modloader/app/structs/ExtensionDataGetter__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtensionDataGetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtensionDataGetter_DEFINED) && !defined(IL2CPP_STRUCT_ExtensionDataGetter_FWDDECL)
#include <Modloader/app/structs/ExtensionDataGetter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtensionDataGetter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
