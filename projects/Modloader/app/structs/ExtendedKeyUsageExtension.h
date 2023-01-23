#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtendedKeyUsageExtension_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtendedKeyUsageExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtendedKeyUsageExtension_DEFINED)
#include <Modloader/app/structs/ExtendedKeyUsageExtension__Fields.h>
#if defined(IL2CPP_STRUCT_ExtendedKeyUsageExtension__Fields_DEFINED)
#define IL2CPP_STRUCT_ExtendedKeyUsageExtension_DEFINED
struct ExtendedKeyUsageExtension__Class;
struct ExtendedKeyUsageExtension {
    struct ExtendedKeyUsageExtension__Class* klass;
    MonitorData* monitor;
    struct ExtendedKeyUsageExtension__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExtendedKeyUsageExtension_FWDDECL)
#define IL2CPP_STRUCT_ExtendedKeyUsageExtension_FWDDECL
#include <Modloader/app/structs/ExtendedKeyUsageExtension__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtendedKeyUsageExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtendedKeyUsageExtension_DEFINED) && !defined(IL2CPP_STRUCT_ExtendedKeyUsageExtension_FWDDECL)
#include <Modloader/app/structs/ExtendedKeyUsageExtension.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtendedKeyUsageExtension.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
