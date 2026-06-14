#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Guid__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Guid__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid__Boxed_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_Guid__Boxed_DEFINED
struct Guid__Class;
struct Guid__Boxed {
    struct Guid__Class* klass;
    MonitorData* monitor;
    struct Guid fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Guid__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Guid__Boxed_FWDDECL
#include <Modloader/app/structs/Guid__Class.h>
#endif
#undef IL2CPP_STRUCT_Guid__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Guid__Boxed_FWDDECL)
#include <Modloader/app/structs/Guid__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Guid__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
