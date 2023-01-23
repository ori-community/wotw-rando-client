#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonParser__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonParser__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser__Array_DEFINED)
#define IL2CPP_STRUCT_JsonParser__Array_DEFINED
struct JsonParser__Array__Class;
struct JsonParser;
struct JsonParser__Array {
    struct JsonParser__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct JsonParser* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_JsonParser__Array_FWDDECL)
#define IL2CPP_STRUCT_JsonParser__Array_FWDDECL
#include <Modloader/app/structs/JsonParser.h>
#include <Modloader/app/structs/JsonParser__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonParser__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser__Array_DEFINED) && !defined(IL2CPP_STRUCT_JsonParser__Array_FWDDECL)
#include <Modloader/app/structs/JsonParser__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonParser__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
