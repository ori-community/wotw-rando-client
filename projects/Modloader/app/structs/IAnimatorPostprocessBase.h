#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAnimatorPostprocessBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAnimatorPostprocessBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimatorPostprocessBase_DEFINED)
#define IL2CPP_STRUCT_IAnimatorPostprocessBase_DEFINED
struct IAnimatorPostprocessBase__Class;
struct IAnimatorPostprocessBase {
    struct IAnimatorPostprocessBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAnimatorPostprocessBase_FWDDECL)
#define IL2CPP_STRUCT_IAnimatorPostprocessBase_FWDDECL
#include <Modloader/app/structs/IAnimatorPostprocessBase__Class.h>
#endif
#undef IL2CPP_STRUCT_IAnimatorPostprocessBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimatorPostprocessBase_DEFINED) && !defined(IL2CPP_STRUCT_IAnimatorPostprocessBase_FWDDECL)
#include <Modloader/app/structs/IAnimatorPostprocessBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAnimatorPostprocessBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
