#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticTree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticTree__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticTree__Fields_DEFINED
struct Int16__Array;
struct Int32__Array;
struct __declspec(align(8)) StaticTree__Fields {
    struct Int16__Array* treeCodes;
    struct Int32__Array* extraBits;
    int32_t extraBase;
    int32_t elems;
    int32_t maxLength;
};
#endif
#if !defined(IL2CPP_STRUCT_StaticTree__Fields_FWDDECL)
#define IL2CPP_STRUCT_StaticTree__Fields_FWDDECL
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_StaticTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticTree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StaticTree__Fields_FWDDECL)
#include <Modloader/app/structs/StaticTree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticTree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
