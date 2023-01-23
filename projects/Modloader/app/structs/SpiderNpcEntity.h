#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderNpcEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderNpcEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderNpcEntity_DEFINED)
#include <Modloader/app/structs/SpiderNpcEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderNpcEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderNpcEntity_DEFINED
struct SpiderNpcEntity__Class;
struct SpiderNpcEntity {
    struct SpiderNpcEntity__Class* klass;
    MonitorData* monitor;
    struct SpiderNpcEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderNpcEntity_FWDDECL)
#define IL2CPP_STRUCT_SpiderNpcEntity_FWDDECL
#include <Modloader/app/structs/SpiderNpcEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderNpcEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderNpcEntity_DEFINED) && !defined(IL2CPP_STRUCT_SpiderNpcEntity_FWDDECL)
#include <Modloader/app/structs/SpiderNpcEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderNpcEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
