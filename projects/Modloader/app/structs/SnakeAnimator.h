#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnakeAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnakeAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeAnimator_DEFINED)
#include <Modloader/app/structs/SnakeAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_SnakeAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SnakeAnimator_DEFINED
struct SnakeAnimator__Class;
struct SnakeAnimator {
    struct SnakeAnimator__Class* klass;
    MonitorData* monitor;
    struct SnakeAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnakeAnimator_FWDDECL)
#define IL2CPP_STRUCT_SnakeAnimator_FWDDECL
#include <Modloader/app/structs/SnakeAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_SnakeAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeAnimator_DEFINED) && !defined(IL2CPP_STRUCT_SnakeAnimator_FWDDECL)
#include <Modloader/app/structs/SnakeAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnakeAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
