#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatProvider_Number_NumberBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatProvider_Number_NumberBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatProvider_Number_NumberBuffer_DEFINED)
#define IL2CPP_STRUCT_FormatProvider_Number_NumberBuffer_DEFINED
struct FormatProvider_Number_NumberBuffer {
    int32_t precision;
    int32_t scale;
    bool sign;
    uint16_t* overrideDigits;
};
#endif
#if !defined(IL2CPP_STRUCT_FormatProvider_Number_NumberBuffer_FWDDECL)
#define IL2CPP_STRUCT_FormatProvider_Number_NumberBuffer_FWDDECL
#endif
#undef IL2CPP_STRUCT_FormatProvider_Number_NumberBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatProvider_Number_NumberBuffer_DEFINED) && !defined(IL2CPP_STRUCT_FormatProvider_Number_NumberBuffer_FWDDECL)
#include <Modloader/app/structs/FormatProvider_Number_NumberBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatProvider_Number_NumberBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
