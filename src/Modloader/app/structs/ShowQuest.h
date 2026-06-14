#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowQuest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowQuest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuest_DEFINED)
#include <Modloader/app/structs/ShowQuest__Fields.h>
#if defined(IL2CPP_STRUCT_ShowQuest__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowQuest_DEFINED
struct ShowQuest__Class;
struct ShowQuest {
    struct ShowQuest__Class* klass;
    MonitorData* monitor;
    struct ShowQuest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowQuest_FWDDECL)
#define IL2CPP_STRUCT_ShowQuest_FWDDECL
#include <Modloader/app/structs/ShowQuest__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowQuest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuest_DEFINED) && !defined(IL2CPP_STRUCT_ShowQuest_FWDDECL)
#include <Modloader/app/structs/ShowQuest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowQuest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
