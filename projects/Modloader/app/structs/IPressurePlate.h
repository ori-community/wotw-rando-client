#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPressurePlate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPressurePlate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPressurePlate_DEFINED)
#define IL2CPP_STRUCT_IPressurePlate_DEFINED
struct IPressurePlate__Class;
struct IPressurePlate {
    struct IPressurePlate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPressurePlate_FWDDECL)
#define IL2CPP_STRUCT_IPressurePlate_FWDDECL
#include <Modloader/app/structs/IPressurePlate__Class.h>
#endif
#undef IL2CPP_STRUCT_IPressurePlate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPressurePlate_DEFINED) && !defined(IL2CPP_STRUCT_IPressurePlate_FWDDECL)
#include <Modloader/app/structs/IPressurePlate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPressurePlate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
