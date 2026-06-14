#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonExtensionDataAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonExtensionDataAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonExtensionDataAttribute_DEFINED)
#include <Modloader/app/structs/JsonExtensionDataAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_JsonExtensionDataAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonExtensionDataAttribute_DEFINED
struct JsonExtensionDataAttribute__Class;
struct JsonExtensionDataAttribute {
    struct JsonExtensionDataAttribute__Class* klass;
    MonitorData* monitor;
    struct JsonExtensionDataAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonExtensionDataAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonExtensionDataAttribute_FWDDECL
#include <Modloader/app/structs/JsonExtensionDataAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonExtensionDataAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonExtensionDataAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonExtensionDataAttribute_FWDDECL)
#include <Modloader/app/structs/JsonExtensionDataAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonExtensionDataAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
