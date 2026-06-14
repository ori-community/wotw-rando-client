#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompleteQuest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompleteQuest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompleteQuest_DEFINED)
#include <Modloader/app/structs/CompleteQuest__Fields.h>
#if defined(IL2CPP_STRUCT_CompleteQuest__Fields_DEFINED)
#define IL2CPP_STRUCT_CompleteQuest_DEFINED
struct CompleteQuest__Class;
struct CompleteQuest {
    struct CompleteQuest__Class* klass;
    MonitorData* monitor;
    struct CompleteQuest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompleteQuest_FWDDECL)
#define IL2CPP_STRUCT_CompleteQuest_FWDDECL
#include <Modloader/app/structs/CompleteQuest__Class.h>
#endif
#undef IL2CPP_STRUCT_CompleteQuest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompleteQuest_DEFINED) && !defined(IL2CPP_STRUCT_CompleteQuest_FWDDECL)
#include <Modloader/app/structs/CompleteQuest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompleteQuest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
