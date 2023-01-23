#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonPrimitiveContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonPrimitiveContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPrimitiveContract_DEFINED)
#include <Modloader/app/structs/JsonPrimitiveContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonPrimitiveContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonPrimitiveContract_DEFINED
struct JsonPrimitiveContract__Class;
struct JsonPrimitiveContract {
    struct JsonPrimitiveContract__Class* klass;
    MonitorData* monitor;
    struct JsonPrimitiveContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonPrimitiveContract_FWDDECL)
#define IL2CPP_STRUCT_JsonPrimitiveContract_FWDDECL
#include <Modloader/app/structs/JsonPrimitiveContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonPrimitiveContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPrimitiveContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonPrimitiveContract_FWDDECL)
#include <Modloader/app/structs/JsonPrimitiveContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonPrimitiveContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
