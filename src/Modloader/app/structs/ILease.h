#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILease_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILease_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILease_DEFINED)
#define IL2CPP_STRUCT_ILease_DEFINED
struct ILease__Class;
struct ILease {
    struct ILease__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILease_FWDDECL)
#define IL2CPP_STRUCT_ILease_FWDDECL
#include <Modloader/app/structs/ILease__Class.h>
#endif
#undef IL2CPP_STRUCT_ILease_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILease_DEFINED) && !defined(IL2CPP_STRUCT_ILease_FWDDECL)
#include <Modloader/app/structs/ILease.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILease.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
