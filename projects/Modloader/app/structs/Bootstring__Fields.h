#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bootstring__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bootstring__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bootstring__Fields_DEFINED)
#define IL2CPP_STRUCT_Bootstring__Fields_DEFINED
struct __declspec(align(8)) Bootstring__Fields {
    uint16_t delimiter;
    int32_t base_num;
    int32_t tmin;
    int32_t tmax;
    int32_t skew;
    int32_t damp;
    int32_t initial_bias;
    int32_t initial_n;
};
#endif
#if !defined(IL2CPP_STRUCT_Bootstring__Fields_FWDDECL)
#define IL2CPP_STRUCT_Bootstring__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Bootstring__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bootstring__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Bootstring__Fields_FWDDECL)
#include <Modloader/app/structs/Bootstring__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bootstring__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
