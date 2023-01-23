#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthState_DEFINED)
#define IL2CPP_STRUCT_DepthState_DEFINED
struct DepthState {
    uint8_t m_WriteEnabled;
    int8_t m_CompareFunction;
};
#endif
#if !defined(IL2CPP_STRUCT_DepthState_FWDDECL)
#define IL2CPP_STRUCT_DepthState_FWDDECL
#endif
#undef IL2CPP_STRUCT_DepthState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthState_DEFINED) && !defined(IL2CPP_STRUCT_DepthState_FWDDECL)
#include <Modloader/app/structs/DepthState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
