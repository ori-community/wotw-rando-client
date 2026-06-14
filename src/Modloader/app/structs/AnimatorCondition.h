#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorCondition_DEFINED)
#include <Modloader/app/structs/AnimatorCondition__Fields.h>
#if defined(IL2CPP_STRUCT_AnimatorCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatorCondition_DEFINED
struct AnimatorCondition__Class;
struct AnimatorCondition {
    struct AnimatorCondition__Class* klass;
    MonitorData* monitor;
    struct AnimatorCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorCondition_FWDDECL)
#define IL2CPP_STRUCT_AnimatorCondition_FWDDECL
#include <Modloader/app/structs/AnimatorCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatorCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorCondition_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorCondition_FWDDECL)
#include <Modloader/app/structs/AnimatorCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
