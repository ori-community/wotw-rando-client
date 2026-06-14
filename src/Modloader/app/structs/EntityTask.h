#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTask_DEFINED)
#include <Modloader/app/structs/EntityTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityTask_DEFINED
struct EntityTask__Class;
struct EntityTask {
    struct EntityTask__Class* klass;
    MonitorData* monitor;
    struct EntityTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityTask_FWDDECL)
#define IL2CPP_STRUCT_EntityTask_FWDDECL
#include <Modloader/app/structs/EntityTask__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTask_DEFINED) && !defined(IL2CPP_STRUCT_EntityTask_FWDDECL)
#include <Modloader/app/structs/EntityTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
