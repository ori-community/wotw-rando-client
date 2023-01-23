#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Expression_ExtensionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Expression_ExtensionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Expression_ExtensionInfo_DEFINED)
#include <Modloader/app/structs/Expression_ExtensionInfo__Fields.h>
#if defined(IL2CPP_STRUCT_Expression_ExtensionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_Expression_ExtensionInfo_DEFINED
struct Expression_ExtensionInfo__Class;
struct Expression_ExtensionInfo {
    struct Expression_ExtensionInfo__Class* klass;
    MonitorData* monitor;
    struct Expression_ExtensionInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Expression_ExtensionInfo_FWDDECL)
#define IL2CPP_STRUCT_Expression_ExtensionInfo_FWDDECL
#include <Modloader/app/structs/Expression_ExtensionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_Expression_ExtensionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Expression_ExtensionInfo_DEFINED) && !defined(IL2CPP_STRUCT_Expression_ExtensionInfo_FWDDECL)
#include <Modloader/app/structs/Expression_ExtensionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Expression_ExtensionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
