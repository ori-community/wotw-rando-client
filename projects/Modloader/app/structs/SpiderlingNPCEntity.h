#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderlingNPCEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderlingNPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingNPCEntity_DEFINED)
#include <Modloader/app/structs/SpiderlingNPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderlingNPCEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderlingNPCEntity_DEFINED
struct SpiderlingNPCEntity__Class;
struct SpiderlingNPCEntity {
    struct SpiderlingNPCEntity__Class* klass;
    MonitorData* monitor;
    struct SpiderlingNPCEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderlingNPCEntity_FWDDECL)
#define IL2CPP_STRUCT_SpiderlingNPCEntity_FWDDECL
#include <Modloader/app/structs/SpiderlingNPCEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderlingNPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingNPCEntity_DEFINED) && !defined(IL2CPP_STRUCT_SpiderlingNPCEntity_FWDDECL)
#include <Modloader/app/structs/SpiderlingNPCEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderlingNPCEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
