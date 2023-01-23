#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtensionOfNativeClassAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtensionOfNativeClassAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtensionOfNativeClassAttribute_DEFINED)
#define IL2CPP_STRUCT_ExtensionOfNativeClassAttribute_DEFINED
struct ExtensionOfNativeClassAttribute__Class;
struct ExtensionOfNativeClassAttribute {
    struct ExtensionOfNativeClassAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExtensionOfNativeClassAttribute_FWDDECL)
#define IL2CPP_STRUCT_ExtensionOfNativeClassAttribute_FWDDECL
#include <Modloader/app/structs/ExtensionOfNativeClassAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtensionOfNativeClassAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtensionOfNativeClassAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ExtensionOfNativeClassAttribute_FWDDECL)
#include <Modloader/app/structs/ExtensionOfNativeClassAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtensionOfNativeClassAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
