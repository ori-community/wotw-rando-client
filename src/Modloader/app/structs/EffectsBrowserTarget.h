#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EffectsBrowserTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EffectsBrowserTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectsBrowserTarget_DEFINED)
#define IL2CPP_STRUCT_EffectsBrowserTarget_DEFINED
struct EffectsBrowserTarget__Class;
struct EffectsBrowserTarget {
    struct EffectsBrowserTarget__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EffectsBrowserTarget_FWDDECL)
#define IL2CPP_STRUCT_EffectsBrowserTarget_FWDDECL
#include <Modloader/app/structs/EffectsBrowserTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_EffectsBrowserTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectsBrowserTarget_DEFINED) && !defined(IL2CPP_STRUCT_EffectsBrowserTarget_FWDDECL)
#include <Modloader/app/structs/EffectsBrowserTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EffectsBrowserTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
