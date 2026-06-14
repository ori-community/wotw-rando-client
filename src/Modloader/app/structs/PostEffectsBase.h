#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostEffectsBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostEffectsBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostEffectsBase_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PostEffectsBase_DEFINED
struct PostEffectsBase__Class;
struct PostEffectsBase {
    struct PostEffectsBase__Class* klass;
    MonitorData* monitor;
    struct PostEffectsBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PostEffectsBase_FWDDECL)
#define IL2CPP_STRUCT_PostEffectsBase_FWDDECL
#include <Modloader/app/structs/PostEffectsBase__Class.h>
#endif
#undef IL2CPP_STRUCT_PostEffectsBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostEffectsBase_DEFINED) && !defined(IL2CPP_STRUCT_PostEffectsBase_FWDDECL)
#include <Modloader/app/structs/PostEffectsBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostEffectsBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
