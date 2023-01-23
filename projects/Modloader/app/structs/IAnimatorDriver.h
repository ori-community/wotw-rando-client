#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAnimatorDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAnimatorDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimatorDriver_DEFINED)
#define IL2CPP_STRUCT_IAnimatorDriver_DEFINED
struct IAnimatorDriver__Class;
struct IAnimatorDriver {
    struct IAnimatorDriver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAnimatorDriver_FWDDECL)
#define IL2CPP_STRUCT_IAnimatorDriver_FWDDECL
#include <Modloader/app/structs/IAnimatorDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_IAnimatorDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimatorDriver_DEFINED) && !defined(IL2CPP_STRUCT_IAnimatorDriver_FWDDECL)
#include <Modloader/app/structs/IAnimatorDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAnimatorDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
