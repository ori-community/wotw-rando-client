#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateAnimator_DEFINED)
#include <Modloader/app/structs/InstantiateAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_InstantiateAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiateAnimator_DEFINED
struct InstantiateAnimator__Class;
struct InstantiateAnimator {
    struct InstantiateAnimator__Class* klass;
    MonitorData* monitor;
    struct InstantiateAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateAnimator_FWDDECL)
#define IL2CPP_STRUCT_InstantiateAnimator_FWDDECL
#include <Modloader/app/structs/InstantiateAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiateAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateAnimator_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateAnimator_FWDDECL)
#include <Modloader/app/structs/InstantiateAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
