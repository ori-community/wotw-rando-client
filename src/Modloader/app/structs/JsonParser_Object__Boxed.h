#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonParser_Object__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonParser_Object__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser_Object__Boxed_DEFINED)
#include <Modloader/app/structs/JsonParser_Object.h>
#if defined(IL2CPP_STRUCT_JsonParser_Object_DEFINED)
#define IL2CPP_STRUCT_JsonParser_Object__Boxed_DEFINED
struct JsonParser_Object__Class;
struct JsonParser_Object__Boxed {
    struct JsonParser_Object__Class* klass;
    MonitorData* monitor;
    struct JsonParser_Object fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonParser_Object__Boxed_FWDDECL)
#define IL2CPP_STRUCT_JsonParser_Object__Boxed_FWDDECL
#include <Modloader/app/structs/JsonParser_Object__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonParser_Object__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser_Object__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_JsonParser_Object__Boxed_FWDDECL)
#include <Modloader/app/structs/JsonParser_Object__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonParser_Object__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
