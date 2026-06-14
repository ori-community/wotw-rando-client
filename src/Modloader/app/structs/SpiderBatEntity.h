#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatEntity_DEFINED)
#include <Modloader/app/structs/SpiderBatEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderBatEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBatEntity_DEFINED
struct SpiderBatEntity__Class;
struct SpiderBatEntity {
    struct SpiderBatEntity__Class* klass;
    MonitorData* monitor;
    struct SpiderBatEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatEntity_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatEntity_FWDDECL
#include <Modloader/app/structs/SpiderBatEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderBatEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatEntity_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatEntity_FWDDECL)
#include <Modloader/app/structs/SpiderBatEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
