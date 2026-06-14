#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformOffsetter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformOffsetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformOffsetter_DEFINED)
#include <Modloader/app/structs/TransformOffsetter__Fields.h>
#if defined(IL2CPP_STRUCT_TransformOffsetter__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformOffsetter_DEFINED
struct TransformOffsetter__Class;
struct TransformOffsetter {
    struct TransformOffsetter__Class* klass;
    MonitorData* monitor;
    struct TransformOffsetter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformOffsetter_FWDDECL)
#define IL2CPP_STRUCT_TransformOffsetter_FWDDECL
#include <Modloader/app/structs/TransformOffsetter__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformOffsetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformOffsetter_DEFINED) && !defined(IL2CPP_STRUCT_TransformOffsetter_FWDDECL)
#include <Modloader/app/structs/TransformOffsetter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformOffsetter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
