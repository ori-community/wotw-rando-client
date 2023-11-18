#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClearSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClearSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClearSettings__Boxed_DEFINED)
#include <Modloader/app/structs/ClearSettings.h>
#if defined(IL2CPP_STRUCT_ClearSettings_DEFINED)
#define IL2CPP_STRUCT_ClearSettings__Boxed_DEFINED
struct ClearSettings__Class;
struct ClearSettings__Boxed {
    struct ClearSettings__Class* klass;
    MonitorData* monitor;
    struct ClearSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClearSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ClearSettings__Boxed_FWDDECL
#include <Modloader/app/structs/ClearSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ClearSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClearSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ClearSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/ClearSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClearSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
