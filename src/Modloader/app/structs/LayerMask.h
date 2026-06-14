#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayerMask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayerMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_LayerMask_DEFINED
struct LayerMask {
    int32_t m_Mask;
};
#endif
#if !defined(IL2CPP_STRUCT_LayerMask_FWDDECL)
#define IL2CPP_STRUCT_LayerMask_FWDDECL
#endif
#undef IL2CPP_STRUCT_LayerMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayerMask_DEFINED) && !defined(IL2CPP_STRUCT_LayerMask_FWDDECL)
#include <Modloader/app/structs/LayerMask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayerMask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
