#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtensionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtensionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtensionAttribute_DEFINED)
#define IL2CPP_STRUCT_ExtensionAttribute_DEFINED
struct ExtensionAttribute__Class;
struct ExtensionAttribute {
    struct ExtensionAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExtensionAttribute_FWDDECL)
#define IL2CPP_STRUCT_ExtensionAttribute_FWDDECL
#include <Modloader/app/structs/ExtensionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtensionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtensionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ExtensionAttribute_FWDDECL)
#include <Modloader/app/structs/ExtensionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtensionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
