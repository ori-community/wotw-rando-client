#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullingGroupEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullingGroupEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroupEvent_DEFINED)
#define IL2CPP_STRUCT_CullingGroupEvent_DEFINED
struct CullingGroupEvent {
    int32_t m_Index;
    uint8_t m_PrevState;
    uint8_t m_ThisState;
};
#endif
#if !defined(IL2CPP_STRUCT_CullingGroupEvent_FWDDECL)
#define IL2CPP_STRUCT_CullingGroupEvent_FWDDECL
#endif
#undef IL2CPP_STRUCT_CullingGroupEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroupEvent_DEFINED) && !defined(IL2CPP_STRUCT_CullingGroupEvent_FWDDECL)
#include <Modloader/app/structs/CullingGroupEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullingGroupEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
