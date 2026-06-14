#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StencilState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StencilState_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilState_DEFINED)
#define IL2CPP_STRUCT_StencilState_DEFINED
struct StencilState {
    uint8_t m_Enabled;
    uint8_t m_ReadMask;
    uint8_t m_WriteMask;
    uint8_t m_Padding;
    uint8_t m_CompareFunctionFront;
    uint8_t m_PassOperationFront;
    uint8_t m_FailOperationFront;
    uint8_t m_ZFailOperationFront;
    uint8_t m_CompareFunctionBack;
    uint8_t m_PassOperationBack;
    uint8_t m_FailOperationBack;
    uint8_t m_ZFailOperationBack;
};
#endif
#if !defined(IL2CPP_STRUCT_StencilState_FWDDECL)
#define IL2CPP_STRUCT_StencilState_FWDDECL
#endif
#undef IL2CPP_STRUCT_StencilState_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilState_DEFINED) && !defined(IL2CPP_STRUCT_StencilState_FWDDECL)
#include <Modloader/app/structs/StencilState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StencilState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
