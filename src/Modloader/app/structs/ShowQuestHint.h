#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowQuestHint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowQuestHint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuestHint_DEFINED)
#include <Modloader/app/structs/ShowQuestHint__Fields.h>
#if defined(IL2CPP_STRUCT_ShowQuestHint__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowQuestHint_DEFINED
struct ShowQuestHint__Class;
struct ShowQuestHint {
    struct ShowQuestHint__Class* klass;
    MonitorData* monitor;
    struct ShowQuestHint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowQuestHint_FWDDECL)
#define IL2CPP_STRUCT_ShowQuestHint_FWDDECL
#include <Modloader/app/structs/ShowQuestHint__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowQuestHint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuestHint_DEFINED) && !defined(IL2CPP_STRUCT_ShowQuestHint_FWDDECL)
#include <Modloader/app/structs/ShowQuestHint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowQuestHint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
