#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonPosition__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonPosition__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPosition__Array_DEFINED)
#include <Modloader/app/structs/JsonPosition.h>
#if defined(IL2CPP_STRUCT_JsonPosition_DEFINED)
#define IL2CPP_STRUCT_JsonPosition__Array_DEFINED
struct JsonPosition__Array__Class;
struct JsonPosition__Array {
    struct JsonPosition__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct JsonPosition vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonPosition__Array_FWDDECL)
#define IL2CPP_STRUCT_JsonPosition__Array_FWDDECL
#include <Modloader/app/structs/JsonPosition__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonPosition__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPosition__Array_DEFINED) && !defined(IL2CPP_STRUCT_JsonPosition__Array_FWDDECL)
#include <Modloader/app/structs/JsonPosition__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonPosition__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
