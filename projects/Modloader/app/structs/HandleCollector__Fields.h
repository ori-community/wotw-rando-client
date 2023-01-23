#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandleCollector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandleCollector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandleCollector__Fields_DEFINED)
#define IL2CPP_STRUCT_HandleCollector__Fields_DEFINED
struct String;
struct Int32__Array;
struct __declspec(align(8)) HandleCollector__Fields {
    struct String* name;
    int32_t initialThreshold;
    int32_t maximumThreshold;
    int32_t threshold;
    int32_t handleCount;
    struct Int32__Array* gc_counts;
    int32_t gc_gen;
};
#endif
#if !defined(IL2CPP_STRUCT_HandleCollector__Fields_FWDDECL)
#define IL2CPP_STRUCT_HandleCollector__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HandleCollector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandleCollector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HandleCollector__Fields_FWDDECL)
#include <Modloader/app/structs/HandleCollector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandleCollector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
