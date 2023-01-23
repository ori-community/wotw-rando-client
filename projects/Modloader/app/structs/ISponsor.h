#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISponsor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISponsor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISponsor_DEFINED)
#define IL2CPP_STRUCT_ISponsor_DEFINED
struct ISponsor__Class;
struct ISponsor {
    struct ISponsor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISponsor_FWDDECL)
#define IL2CPP_STRUCT_ISponsor_FWDDECL
#include <Modloader/app/structs/ISponsor__Class.h>
#endif
#undef IL2CPP_STRUCT_ISponsor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISponsor_DEFINED) && !defined(IL2CPP_STRUCT_ISponsor_FWDDECL)
#include <Modloader/app/structs/ISponsor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISponsor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
