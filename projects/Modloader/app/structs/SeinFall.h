#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFall_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFall_DEFINED)
#include <Modloader/app/structs/SeinFall__Fields.h>
#if defined(IL2CPP_STRUCT_SeinFall__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinFall_DEFINED
struct SeinFall__Class;
struct SeinFall {
    struct SeinFall__Class* klass;
    MonitorData* monitor;
    struct SeinFall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFall_FWDDECL)
#define IL2CPP_STRUCT_SeinFall_FWDDECL
#include <Modloader/app/structs/SeinFall__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinFall_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFall_DEFINED) && !defined(IL2CPP_STRUCT_SeinFall_FWDDECL)
#include <Modloader/app/structs/SeinFall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
