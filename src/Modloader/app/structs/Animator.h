#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Animator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Animator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Animator_DEFINED)
#include <Modloader/app/structs/Animator__Fields.h>
#if defined(IL2CPP_STRUCT_Animator__Fields_DEFINED)
#define IL2CPP_STRUCT_Animator_DEFINED
struct Animator__Class;
struct Animator {
    struct Animator__Class* klass;
    MonitorData* monitor;
    struct Animator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Animator_FWDDECL)
#define IL2CPP_STRUCT_Animator_FWDDECL
#include <Modloader/app/structs/Animator__Class.h>
#endif
#undef IL2CPP_STRUCT_Animator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Animator_DEFINED) && !defined(IL2CPP_STRUCT_Animator_FWDDECL)
#include <Modloader/app/structs/Animator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Animator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
