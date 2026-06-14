#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonArrayAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonArrayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonArrayAttribute_DEFINED)
#include <Modloader/app/structs/JsonArrayAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_JsonArrayAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonArrayAttribute_DEFINED
struct JsonArrayAttribute__Class;
struct JsonArrayAttribute {
    struct JsonArrayAttribute__Class* klass;
    MonitorData* monitor;
    struct JsonArrayAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonArrayAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonArrayAttribute_FWDDECL
#include <Modloader/app/structs/JsonArrayAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonArrayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonArrayAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonArrayAttribute_FWDDECL)
#include <Modloader/app/structs/JsonArrayAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonArrayAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
