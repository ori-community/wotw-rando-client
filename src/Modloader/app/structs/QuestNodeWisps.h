#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestNodeWisps_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestNodeWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeWisps_DEFINED)
#include <Modloader/app/structs/QuestNodeWisps__Fields.h>
#if defined(IL2CPP_STRUCT_QuestNodeWisps__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestNodeWisps_DEFINED
struct QuestNodeWisps__Class;
struct QuestNodeWisps {
    struct QuestNodeWisps__Class* klass;
    MonitorData* monitor;
    struct QuestNodeWisps__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestNodeWisps_FWDDECL)
#define IL2CPP_STRUCT_QuestNodeWisps_FWDDECL
#include <Modloader/app/structs/QuestNodeWisps__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestNodeWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeWisps_DEFINED) && !defined(IL2CPP_STRUCT_QuestNodeWisps_FWDDECL)
#include <Modloader/app/structs/QuestNodeWisps.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestNodeWisps.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
