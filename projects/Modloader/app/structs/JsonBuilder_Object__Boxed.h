#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonBuilder_Object__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonBuilder_Object__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_Object__Boxed_DEFINED)
#include <Modloader/app/structs/JsonBuilder_Object.h>
#if defined(IL2CPP_STRUCT_JsonBuilder_Object_DEFINED)
#define IL2CPP_STRUCT_JsonBuilder_Object__Boxed_DEFINED
struct JsonBuilder_Object__Class;
struct JsonBuilder_Object__Boxed {
    struct JsonBuilder_Object__Class* klass;
    MonitorData* monitor;
    struct JsonBuilder_Object fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonBuilder_Object__Boxed_FWDDECL)
#define IL2CPP_STRUCT_JsonBuilder_Object__Boxed_FWDDECL
#include <Modloader/app/structs/JsonBuilder_Object__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonBuilder_Object__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_Object__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_JsonBuilder_Object__Boxed_FWDDECL)
#include <Modloader/app/structs/JsonBuilder_Object__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonBuilder_Object__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
