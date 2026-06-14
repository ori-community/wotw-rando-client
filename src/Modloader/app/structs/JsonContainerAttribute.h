#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonContainerAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonContainerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerAttribute_DEFINED)
#include <Modloader/app/structs/JsonContainerAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_JsonContainerAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonContainerAttribute_DEFINED
struct JsonContainerAttribute__Class;
struct JsonContainerAttribute {
    struct JsonContainerAttribute__Class* klass;
    MonitorData* monitor;
    struct JsonContainerAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonContainerAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonContainerAttribute_FWDDECL
#include <Modloader/app/structs/JsonContainerAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonContainerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonContainerAttribute_FWDDECL)
#include <Modloader/app/structs/JsonContainerAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonContainerAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
