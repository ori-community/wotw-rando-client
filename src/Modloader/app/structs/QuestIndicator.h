#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestIndicator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestIndicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIndicator_DEFINED)
#include <Modloader/app/structs/QuestIndicator__Fields.h>
#if defined(IL2CPP_STRUCT_QuestIndicator__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestIndicator_DEFINED
struct QuestIndicator__Class;
struct QuestIndicator {
    struct QuestIndicator__Class* klass;
    MonitorData* monitor;
    struct QuestIndicator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestIndicator_FWDDECL)
#define IL2CPP_STRUCT_QuestIndicator_FWDDECL
#include <Modloader/app/structs/QuestIndicator__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestIndicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIndicator_DEFINED) && !defined(IL2CPP_STRUCT_QuestIndicator_FWDDECL)
#include <Modloader/app/structs/QuestIndicator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestIndicator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
