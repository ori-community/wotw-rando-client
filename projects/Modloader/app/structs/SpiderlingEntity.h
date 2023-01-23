#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderlingEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderlingEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingEntity_DEFINED)
#include <Modloader/app/structs/SpiderlingEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderlingEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderlingEntity_DEFINED
struct SpiderlingEntity__Class;
struct SpiderlingEntity {
    struct SpiderlingEntity__Class* klass;
    MonitorData* monitor;
    struct SpiderlingEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderlingEntity_FWDDECL)
#define IL2CPP_STRUCT_SpiderlingEntity_FWDDECL
#include <Modloader/app/structs/SpiderlingEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderlingEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingEntity_DEFINED) && !defined(IL2CPP_STRUCT_SpiderlingEntity_FWDDECL)
#include <Modloader/app/structs/SpiderlingEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderlingEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
