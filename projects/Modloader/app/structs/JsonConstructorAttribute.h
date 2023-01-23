#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonConstructorAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonConstructorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConstructorAttribute_DEFINED)
#define IL2CPP_STRUCT_JsonConstructorAttribute_DEFINED
struct JsonConstructorAttribute__Class;
struct JsonConstructorAttribute {
    struct JsonConstructorAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonConstructorAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonConstructorAttribute_FWDDECL
#include <Modloader/app/structs/JsonConstructorAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonConstructorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConstructorAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonConstructorAttribute_FWDDECL)
#include <Modloader/app/structs/JsonConstructorAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonConstructorAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
