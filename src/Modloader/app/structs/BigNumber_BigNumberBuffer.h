#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BigNumber_BigNumberBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BigNumber_BigNumberBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigNumber_BigNumberBuffer_DEFINED)
#define IL2CPP_STRUCT_BigNumber_BigNumberBuffer_DEFINED
struct StringBuilder;
struct BigNumber_BigNumberBuffer {
    struct StringBuilder* digits;
    int32_t precision;
    int32_t scale;
    bool sign;
};
#endif
#if !defined(IL2CPP_STRUCT_BigNumber_BigNumberBuffer_FWDDECL)
#define IL2CPP_STRUCT_BigNumber_BigNumberBuffer_FWDDECL
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_BigNumber_BigNumberBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigNumber_BigNumberBuffer_DEFINED) && !defined(IL2CPP_STRUCT_BigNumber_BigNumberBuffer_FWDDECL)
#include <Modloader/app/structs/BigNumber_BigNumberBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BigNumber_BigNumberBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
