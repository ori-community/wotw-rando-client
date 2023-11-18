#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonIgnoreAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonIgnoreAttribute_DEFINED)
#define IL2CPP_STRUCT_JsonIgnoreAttribute_DEFINED
struct JsonIgnoreAttribute__Class;
struct JsonIgnoreAttribute {
    struct JsonIgnoreAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonIgnoreAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonIgnoreAttribute_FWDDECL
#include <Modloader/app/structs/JsonIgnoreAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonIgnoreAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonIgnoreAttribute_FWDDECL)
#include <Modloader/app/structs/JsonIgnoreAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonIgnoreAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
