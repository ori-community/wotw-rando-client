#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddQuest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddQuest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddQuest_DEFINED)
#include <Modloader/app/structs/AddQuest__Fields.h>
#if defined(IL2CPP_STRUCT_AddQuest__Fields_DEFINED)
#define IL2CPP_STRUCT_AddQuest_DEFINED
struct AddQuest__Class;
struct AddQuest {
    struct AddQuest__Class* klass;
    MonitorData* monitor;
    struct AddQuest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddQuest_FWDDECL)
#define IL2CPP_STRUCT_AddQuest_FWDDECL
#include <Modloader/app/structs/AddQuest__Class.h>
#endif
#undef IL2CPP_STRUCT_AddQuest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddQuest_DEFINED) && !defined(IL2CPP_STRUCT_AddQuest_FWDDECL)
#include <Modloader/app/structs/AddQuest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddQuest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
