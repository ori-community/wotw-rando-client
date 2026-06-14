#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonObjectAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonObjectAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObjectAttribute_DEFINED)
#include <Modloader/app/structs/JsonObjectAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_JsonObjectAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonObjectAttribute_DEFINED
struct JsonObjectAttribute__Class;
struct JsonObjectAttribute {
    struct JsonObjectAttribute__Class* klass;
    MonitorData* monitor;
    struct JsonObjectAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonObjectAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonObjectAttribute_FWDDECL
#include <Modloader/app/structs/JsonObjectAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonObjectAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObjectAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonObjectAttribute_FWDDECL)
#include <Modloader/app/structs/JsonObjectAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonObjectAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
