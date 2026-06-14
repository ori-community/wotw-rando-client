#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorDriver_DEFINED)
#include <Modloader/app/structs/AnimatorDriver__Fields.h>
#if defined(IL2CPP_STRUCT_AnimatorDriver__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatorDriver_DEFINED
struct AnimatorDriver__Class;
struct AnimatorDriver {
    struct AnimatorDriver__Class* klass;
    MonitorData* monitor;
    struct AnimatorDriver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorDriver_FWDDECL)
#define IL2CPP_STRUCT_AnimatorDriver_FWDDECL
#include <Modloader/app/structs/AnimatorDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatorDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorDriver_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorDriver_FWDDECL)
#include <Modloader/app/structs/AnimatorDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
