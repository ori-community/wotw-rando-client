#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyUsageExtension_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyUsageExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyUsageExtension_DEFINED)
#include <Modloader/app/structs/KeyUsageExtension__Fields.h>
#if defined(IL2CPP_STRUCT_KeyUsageExtension__Fields_DEFINED)
#define IL2CPP_STRUCT_KeyUsageExtension_DEFINED
struct KeyUsageExtension__Class;
struct KeyUsageExtension {
    struct KeyUsageExtension__Class* klass;
    MonitorData* monitor;
    struct KeyUsageExtension__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeyUsageExtension_FWDDECL)
#define IL2CPP_STRUCT_KeyUsageExtension_FWDDECL
#include <Modloader/app/structs/KeyUsageExtension__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyUsageExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyUsageExtension_DEFINED) && !defined(IL2CPP_STRUCT_KeyUsageExtension_FWDDECL)
#include <Modloader/app/structs/KeyUsageExtension.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyUsageExtension.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
