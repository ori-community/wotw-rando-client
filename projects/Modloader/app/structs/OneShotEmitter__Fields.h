#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneShotEmitter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneShotEmitter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneShotEmitter__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_OneShotEmitter__Fields_DEFINED
struct ParticleSystem;
struct OneShotEmitter__Fields {
    struct Suspendable__Fields _;
    float m_timeRemaining;
    struct ParticleSystem* m_emitter;
    bool m_done;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneShotEmitter__Fields_FWDDECL)
#define IL2CPP_STRUCT_OneShotEmitter__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_OneShotEmitter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneShotEmitter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OneShotEmitter__Fields_FWDDECL)
#include <Modloader/app/structs/OneShotEmitter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneShotEmitter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
