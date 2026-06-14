#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LODParameters__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LODParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LODParameters__Boxed_DEFINED)
#include <Modloader/app/structs/LODParameters.h>
#if defined(IL2CPP_STRUCT_LODParameters_DEFINED)
#define IL2CPP_STRUCT_LODParameters__Boxed_DEFINED
struct LODParameters__Class;
struct LODParameters__Boxed {
    struct LODParameters__Class* klass;
    MonitorData* monitor;
    struct LODParameters fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LODParameters__Boxed_FWDDECL)
#define IL2CPP_STRUCT_LODParameters__Boxed_FWDDECL
#include <Modloader/app/structs/LODParameters__Class.h>
#endif
#undef IL2CPP_STRUCT_LODParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LODParameters__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_LODParameters__Boxed_FWDDECL)
#include <Modloader/app/structs/LODParameters__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LODParameters__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
