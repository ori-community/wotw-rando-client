#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDecimal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDecimal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDecimal_DEFINED)
#define IL2CPP_STRUCT_SqlDecimal_DEFINED
struct SqlDecimal {
    uint8_t _bStatus;
    uint8_t _bLen;
    uint8_t _bPrec;
    uint8_t _bScale;
    uint32_t _data1;
    uint32_t _data2;
    uint32_t _data3;
    uint32_t _data4;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlDecimal_FWDDECL)
#define IL2CPP_STRUCT_SqlDecimal_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlDecimal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDecimal_DEFINED) && !defined(IL2CPP_STRUCT_SqlDecimal_FWDDECL)
#include <Modloader/app/structs/SqlDecimal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDecimal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
