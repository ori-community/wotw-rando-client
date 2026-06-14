#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Convolution3x3__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Convolution3x3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Convolution3x3__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Convolution3x3__Fields_DEFINED
struct Convolution3x3__Fields {
    struct BaseEffect__Fields _;
    struct Vector3 KernelTop;
    struct Vector3 KernelMiddle;
    struct Vector3 KernelBottom;
    float Divisor;
    float Amount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Convolution3x3__Fields_FWDDECL)
#define IL2CPP_STRUCT_Convolution3x3__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Convolution3x3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Convolution3x3__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Convolution3x3__Fields_FWDDECL)
#include <Modloader/app/structs/Convolution3x3__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Convolution3x3__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
