#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_DEFINED)
#include <Modloader/app/structs/MoonAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_DEFINED
struct MoonAnimator__Class;
struct MoonAnimator {
    struct MoonAnimator__Class* klass;
    MonitorData* monitor;
    struct MoonAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_FWDDECL
#include <Modloader/app/structs/MoonAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_FWDDECL)
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
