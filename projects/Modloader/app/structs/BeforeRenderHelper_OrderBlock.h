#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BeforeRenderHelper_OrderBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BeforeRenderHelper_OrderBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_BeforeRenderHelper_OrderBlock_DEFINED)
#define IL2CPP_STRUCT_BeforeRenderHelper_OrderBlock_DEFINED
struct UnityAction;
struct BeforeRenderHelper_OrderBlock {
    int32_t order;
    struct UnityAction* callback;
};
#endif
#if !defined(IL2CPP_STRUCT_BeforeRenderHelper_OrderBlock_FWDDECL)
#define IL2CPP_STRUCT_BeforeRenderHelper_OrderBlock_FWDDECL
#include <Modloader/app/structs/UnityAction.h>
#endif
#undef IL2CPP_STRUCT_BeforeRenderHelper_OrderBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_BeforeRenderHelper_OrderBlock_DEFINED) && !defined(IL2CPP_STRUCT_BeforeRenderHelper_OrderBlock_FWDDECL)
#include <Modloader/app/structs/BeforeRenderHelper_OrderBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BeforeRenderHelper_OrderBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
