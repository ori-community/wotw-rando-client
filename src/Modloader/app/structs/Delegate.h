#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Delegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Delegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Delegate_DEFINED)
#include <Modloader/app/structs/Delegate__Fields.h>
#if defined(IL2CPP_STRUCT_Delegate__Fields_DEFINED)
#define IL2CPP_STRUCT_Delegate_DEFINED
struct Delegate__Class;
struct Delegate {
    struct Delegate__Class* klass;
    MonitorData* monitor;
    struct Delegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Delegate_FWDDECL)
#define IL2CPP_STRUCT_Delegate_FWDDECL
#include <Modloader/app/structs/Delegate__Class.h>
#endif
#undef IL2CPP_STRUCT_Delegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Delegate_DEFINED) && !defined(IL2CPP_STRUCT_Delegate_FWDDECL)
#include <Modloader/app/structs/Delegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Delegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
