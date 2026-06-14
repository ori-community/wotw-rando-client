#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRevertibleChangeTracking_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRevertibleChangeTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRevertibleChangeTracking_DEFINED)
#define IL2CPP_STRUCT_IRevertibleChangeTracking_DEFINED
struct IRevertibleChangeTracking__Class;
struct IRevertibleChangeTracking {
    struct IRevertibleChangeTracking__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRevertibleChangeTracking_FWDDECL)
#define IL2CPP_STRUCT_IRevertibleChangeTracking_FWDDECL
#include <Modloader/app/structs/IRevertibleChangeTracking__Class.h>
#endif
#undef IL2CPP_STRUCT_IRevertibleChangeTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRevertibleChangeTracking_DEFINED) && !defined(IL2CPP_STRUCT_IRevertibleChangeTracking_FWDDECL)
#include <Modloader/app/structs/IRevertibleChangeTracking.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRevertibleChangeTracking.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
