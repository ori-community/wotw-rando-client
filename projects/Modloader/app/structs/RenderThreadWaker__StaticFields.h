#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderThreadWaker__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderThreadWaker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderThreadWaker__StaticFields_DEFINED)
#include <Modloader/app/structs/PlayerLoopSystem.h>
#if defined(IL2CPP_STRUCT_PlayerLoopSystem_DEFINED)
#define IL2CPP_STRUCT_RenderThreadWaker__StaticFields_DEFINED
struct RenderThreadWaker__StaticFields {
    bool m_enabled;
    struct PlayerLoopSystem m_beforeFixedUpdate;
    struct PlayerLoopSystem m_afterFixedUpdate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderThreadWaker__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RenderThreadWaker__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderThreadWaker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderThreadWaker__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RenderThreadWaker__StaticFields_FWDDECL)
#include <Modloader/app/structs/RenderThreadWaker__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderThreadWaker__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
