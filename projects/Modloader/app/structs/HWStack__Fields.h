#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HWStack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HWStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HWStack__Fields_DEFINED)
#define IL2CPP_STRUCT_HWStack__Fields_DEFINED
struct Object__Array;
struct __declspec(align(8)) HWStack__Fields {
    struct Object__Array* stack;
    int32_t growthRate;
    int32_t used;
    int32_t size;
    int32_t limit;
};
#endif
#if !defined(IL2CPP_STRUCT_HWStack__Fields_FWDDECL)
#define IL2CPP_STRUCT_HWStack__Fields_FWDDECL
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_HWStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HWStack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HWStack__Fields_FWDDECL)
#include <Modloader/app/structs/HWStack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HWStack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
