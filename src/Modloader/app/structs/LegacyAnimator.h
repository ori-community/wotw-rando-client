#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimator_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyAnimator_DEFINED
struct LegacyAnimator__Class;
struct LegacyAnimator {
    struct LegacyAnimator__Class* klass;
    MonitorData* monitor;
    struct LegacyAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyAnimator_FWDDECL)
#define IL2CPP_STRUCT_LegacyAnimator_FWDDECL
#include <Modloader/app/structs/LegacyAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimator_DEFINED) && !defined(IL2CPP_STRUCT_LegacyAnimator_FWDDECL)
#include <Modloader/app/structs/LegacyAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
