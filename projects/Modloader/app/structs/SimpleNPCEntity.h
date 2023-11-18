#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleNPCEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleNPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleNPCEntity_DEFINED)
#include <Modloader/app/structs/SimpleNPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleNPCEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleNPCEntity_DEFINED
struct SimpleNPCEntity__Class;
struct SimpleNPCEntity {
    struct SimpleNPCEntity__Class* klass;
    MonitorData* monitor;
    struct SimpleNPCEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleNPCEntity_FWDDECL)
#define IL2CPP_STRUCT_SimpleNPCEntity_FWDDECL
#include <Modloader/app/structs/SimpleNPCEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleNPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleNPCEntity_DEFINED) && !defined(IL2CPP_STRUCT_SimpleNPCEntity_FWDDECL)
#include <Modloader/app/structs/SimpleNPCEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleNPCEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
