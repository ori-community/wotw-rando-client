#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VectorAnimationParameter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VectorAnimationParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorAnimationParameter_DEFINED)
#include <Modloader/app/structs/VectorAnimationParameter__Fields.h>
#if defined(IL2CPP_STRUCT_VectorAnimationParameter__Fields_DEFINED)
#define IL2CPP_STRUCT_VectorAnimationParameter_DEFINED
struct VectorAnimationParameter__Class;
struct VectorAnimationParameter {
    struct VectorAnimationParameter__Class* klass;
    MonitorData* monitor;
    struct VectorAnimationParameter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VectorAnimationParameter_FWDDECL)
#define IL2CPP_STRUCT_VectorAnimationParameter_FWDDECL
#include <Modloader/app/structs/VectorAnimationParameter__Class.h>
#endif
#undef IL2CPP_STRUCT_VectorAnimationParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorAnimationParameter_DEFINED) && !defined(IL2CPP_STRUCT_VectorAnimationParameter_FWDDECL)
#include <Modloader/app/structs/VectorAnimationParameter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VectorAnimationParameter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
