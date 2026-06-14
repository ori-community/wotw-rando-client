#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorParallelUpdater__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorParallelUpdater__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorParallelUpdater__StaticFields_DEFINED
struct MoonAnimatorParallelUpdater;
struct List_1_Moon_MoonAnimator_;
struct MoonAnimatorParallelUpdater__StaticFields {
    struct MoonAnimatorParallelUpdater* m_instance;
    bool UseGameObjectsMoonReady;
    struct List_1_Moon_MoonAnimator_* Animators;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorParallelUpdater__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/MoonAnimatorParallelUpdater.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorParallelUpdater__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorParallelUpdater__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorParallelUpdater__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
