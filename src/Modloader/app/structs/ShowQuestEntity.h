#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowQuestEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowQuestEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuestEntity_DEFINED)
#include <Modloader/app/structs/ShowQuestEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ShowQuestEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowQuestEntity_DEFINED
struct ShowQuestEntity__Class;
struct ShowQuestEntity {
    struct ShowQuestEntity__Class* klass;
    MonitorData* monitor;
    struct ShowQuestEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowQuestEntity_FWDDECL)
#define IL2CPP_STRUCT_ShowQuestEntity_FWDDECL
#include <Modloader/app/structs/ShowQuestEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowQuestEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuestEntity_DEFINED) && !defined(IL2CPP_STRUCT_ShowQuestEntity_FWDDECL)
#include <Modloader/app/structs/ShowQuestEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowQuestEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
