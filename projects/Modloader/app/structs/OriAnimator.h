#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriAnimator_DEFINED)
#include <Modloader/app/structs/OriAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_OriAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_OriAnimator_DEFINED
struct OriAnimator__Class;
struct OriAnimator {
    struct OriAnimator__Class* klass;
    MonitorData* monitor;
    struct OriAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriAnimator_FWDDECL)
#define IL2CPP_STRUCT_OriAnimator_FWDDECL
#include <Modloader/app/structs/OriAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_OriAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriAnimator_DEFINED) && !defined(IL2CPP_STRUCT_OriAnimator_FWDDECL)
#include <Modloader/app/structs/OriAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
