#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationParameterSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationParameterSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationParameterSet_DEFINED)
#include <Modloader/app/structs/AnimationParameterSet__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationParameterSet__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationParameterSet_DEFINED
struct AnimationParameterSet__Class;
struct AnimationParameterSet {
    struct AnimationParameterSet__Class* klass;
    MonitorData* monitor;
    struct AnimationParameterSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationParameterSet_FWDDECL)
#define IL2CPP_STRUCT_AnimationParameterSet_FWDDECL
#include <Modloader/app/structs/AnimationParameterSet__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationParameterSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationParameterSet_DEFINED) && !defined(IL2CPP_STRUCT_AnimationParameterSet_FWDDECL)
#include <Modloader/app/structs/AnimationParameterSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationParameterSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
