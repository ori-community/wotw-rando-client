#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IChangeTracking_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IChangeTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChangeTracking_DEFINED)
#define IL2CPP_STRUCT_IChangeTracking_DEFINED
struct IChangeTracking__Class;
struct IChangeTracking {
    struct IChangeTracking__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IChangeTracking_FWDDECL)
#define IL2CPP_STRUCT_IChangeTracking_FWDDECL
#include <Modloader/app/structs/IChangeTracking__Class.h>
#endif
#undef IL2CPP_STRUCT_IChangeTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChangeTracking_DEFINED) && !defined(IL2CPP_STRUCT_IChangeTracking_FWDDECL)
#include <Modloader/app/structs/IChangeTracking.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IChangeTracking.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
