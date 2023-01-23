#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisableTargetForSeconds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisableTargetForSeconds_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableTargetForSeconds_DEFINED)
#include <Modloader/app/structs/DisableTargetForSeconds__Fields.h>
#if defined(IL2CPP_STRUCT_DisableTargetForSeconds__Fields_DEFINED)
#define IL2CPP_STRUCT_DisableTargetForSeconds_DEFINED
struct DisableTargetForSeconds__Class;
struct DisableTargetForSeconds {
    struct DisableTargetForSeconds__Class* klass;
    MonitorData* monitor;
    struct DisableTargetForSeconds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisableTargetForSeconds_FWDDECL)
#define IL2CPP_STRUCT_DisableTargetForSeconds_FWDDECL
#include <Modloader/app/structs/DisableTargetForSeconds__Class.h>
#endif
#undef IL2CPP_STRUCT_DisableTargetForSeconds_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableTargetForSeconds_DEFINED) && !defined(IL2CPP_STRUCT_DisableTargetForSeconds_FWDDECL)
#include <Modloader/app/structs/DisableTargetForSeconds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisableTargetForSeconds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
