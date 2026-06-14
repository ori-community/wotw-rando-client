#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IReflectable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IReflectable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReflectable_DEFINED)
#define IL2CPP_STRUCT_IReflectable_DEFINED
struct IReflectable__Class;
struct IReflectable {
    struct IReflectable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IReflectable_FWDDECL)
#define IL2CPP_STRUCT_IReflectable_FWDDECL
#include <Modloader/app/structs/IReflectable__Class.h>
#endif
#undef IL2CPP_STRUCT_IReflectable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReflectable_DEFINED) && !defined(IL2CPP_STRUCT_IReflectable_FWDDECL)
#include <Modloader/app/structs/IReflectable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IReflectable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
