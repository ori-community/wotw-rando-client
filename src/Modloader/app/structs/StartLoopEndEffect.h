#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartLoopEndEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartLoopEndEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartLoopEndEffect_DEFINED)
#include <Modloader/app/structs/StartLoopEndEffect__Fields.h>
#if defined(IL2CPP_STRUCT_StartLoopEndEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_StartLoopEndEffect_DEFINED
struct StartLoopEndEffect__Class;
struct StartLoopEndEffect {
    struct StartLoopEndEffect__Class* klass;
    MonitorData* monitor;
    struct StartLoopEndEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartLoopEndEffect_FWDDECL)
#define IL2CPP_STRUCT_StartLoopEndEffect_FWDDECL
#include <Modloader/app/structs/StartLoopEndEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_StartLoopEndEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartLoopEndEffect_DEFINED) && !defined(IL2CPP_STRUCT_StartLoopEndEffect_FWDDECL)
#include <Modloader/app/structs/StartLoopEndEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartLoopEndEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
