#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparencyAnimatorSystem__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparencyAnimatorSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimatorSystem__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TransparencyAnimatorSystem__StaticFields_DEFINED
struct TransparencyAnimatorSystem;
struct Int32__Array;
struct TransparencyAnimatorSystem__StaticFields {
    bool UseCachedRenderer;
    bool UseFastPaths;
    struct TransparencyAnimatorSystem* m_instance;
    bool UseExperimental;
    struct Int32__Array* m_filthyCache;
};
#endif
#if !defined(IL2CPP_STRUCT_TransparencyAnimatorSystem__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TransparencyAnimatorSystem__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/TransparencyAnimatorSystem.h>
#endif
#undef IL2CPP_STRUCT_TransparencyAnimatorSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimatorSystem__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TransparencyAnimatorSystem__StaticFields_FWDDECL)
#include <Modloader/app/structs/TransparencyAnimatorSystem__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparencyAnimatorSystem__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
