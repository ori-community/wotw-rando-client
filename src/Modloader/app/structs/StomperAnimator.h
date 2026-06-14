#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StomperAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StomperAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperAnimator_DEFINED)
#include <Modloader/app/structs/StomperAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_StomperAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_StomperAnimator_DEFINED
struct StomperAnimator__Class;
struct StomperAnimator {
    struct StomperAnimator__Class* klass;
    MonitorData* monitor;
    struct StomperAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StomperAnimator_FWDDECL)
#define IL2CPP_STRUCT_StomperAnimator_FWDDECL
#include <Modloader/app/structs/StomperAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_StomperAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperAnimator_DEFINED) && !defined(IL2CPP_STRUCT_StomperAnimator_FWDDECL)
#include <Modloader/app/structs/StomperAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StomperAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
