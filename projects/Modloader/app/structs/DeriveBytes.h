#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeriveBytes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeriveBytes_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeriveBytes_DEFINED)
#define IL2CPP_STRUCT_DeriveBytes_DEFINED
struct DeriveBytes__Class;
struct DeriveBytes {
    struct DeriveBytes__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DeriveBytes_FWDDECL)
#define IL2CPP_STRUCT_DeriveBytes_FWDDECL
#include <Modloader/app/structs/DeriveBytes__Class.h>
#endif
#undef IL2CPP_STRUCT_DeriveBytes_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeriveBytes_DEFINED) && !defined(IL2CPP_STRUCT_DeriveBytes_FWDDECL)
#include <Modloader/app/structs/DeriveBytes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeriveBytes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
