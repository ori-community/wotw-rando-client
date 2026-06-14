#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonBuilder_Array__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonBuilder_Array__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_Array__Boxed_DEFINED)
#include <Modloader/app/structs/JsonBuilder_Array.h>
#if defined(IL2CPP_STRUCT_JsonBuilder_Array_DEFINED)
#define IL2CPP_STRUCT_JsonBuilder_Array__Boxed_DEFINED
struct JsonBuilder_Array__Class;
struct JsonBuilder_Array__Boxed {
    struct JsonBuilder_Array__Class* klass;
    MonitorData* monitor;
    struct JsonBuilder_Array fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonBuilder_Array__Boxed_FWDDECL)
#define IL2CPP_STRUCT_JsonBuilder_Array__Boxed_FWDDECL
#include <Modloader/app/structs/JsonBuilder_Array__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonBuilder_Array__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_Array__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_JsonBuilder_Array__Boxed_FWDDECL)
#include <Modloader/app/structs/JsonBuilder_Array__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonBuilder_Array__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
