#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitStop_Entry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitStop_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitStop_Entry__Fields_DEFINED)
#define IL2CPP_STRUCT_HitStop_Entry__Fields_DEFINED
struct ISuspendable;
struct __declspec(align(8)) HitStop_Entry__Fields {
    struct ISuspendable* Suspendable;
    bool WasSuspended;
    float HitStopDelayTime;
    float TimeRemaining;
    float TimeElapsed;
};
#endif
#if !defined(IL2CPP_STRUCT_HitStop_Entry__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitStop_Entry__Fields_FWDDECL
#include <Modloader/app/structs/ISuspendable.h>
#endif
#undef IL2CPP_STRUCT_HitStop_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitStop_Entry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitStop_Entry__Fields_FWDDECL)
#include <Modloader/app/structs/HitStop_Entry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitStop_Entry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
