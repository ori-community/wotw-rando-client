#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaData_DEFINED)
#include <Modloader/app/structs/AnimationMetaData__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationMetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationMetaData_DEFINED
struct AnimationMetaData__Class;
struct AnimationMetaData {
    struct AnimationMetaData__Class* klass;
    MonitorData* monitor;
    struct AnimationMetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationMetaData_FWDDECL)
#define IL2CPP_STRUCT_AnimationMetaData_FWDDECL
#include <Modloader/app/structs/AnimationMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaData_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMetaData_FWDDECL)
#include <Modloader/app/structs/AnimationMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
