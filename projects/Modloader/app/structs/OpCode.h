#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpCode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpCode_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpCode_DEFINED)
#define IL2CPP_STRUCT_OpCode_DEFINED
struct OpCode {
    uint8_t op1;
    uint8_t op2;
    uint8_t push;
    uint8_t pop;
    uint8_t size;
    uint8_t type;
    uint8_t args;
    uint8_t flow;
};
#endif
#if !defined(IL2CPP_STRUCT_OpCode_FWDDECL)
#define IL2CPP_STRUCT_OpCode_FWDDECL
#endif
#undef IL2CPP_STRUCT_OpCode_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpCode_DEFINED) && !defined(IL2CPP_STRUCT_OpCode_FWDDECL)
#include <Modloader/app/structs/OpCode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpCode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
