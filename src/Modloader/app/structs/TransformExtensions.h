#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformExtensions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformExtensions_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformExtensions_DEFINED)
#define IL2CPP_STRUCT_TransformExtensions_DEFINED
struct TransformExtensions__Class;
struct TransformExtensions {
    struct TransformExtensions__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TransformExtensions_FWDDECL)
#define IL2CPP_STRUCT_TransformExtensions_FWDDECL
#include <Modloader/app/structs/TransformExtensions__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformExtensions_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformExtensions_DEFINED) && !defined(IL2CPP_STRUCT_TransformExtensions_FWDDECL)
#include <Modloader/app/structs/TransformExtensions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformExtensions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
