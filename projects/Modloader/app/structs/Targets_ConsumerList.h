#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Targets_ConsumerList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Targets_ConsumerList_INITIALIZING
#if !defined(IL2CPP_STRUCT_Targets_ConsumerList_DEFINED)
#include <Modloader/app/structs/Targets_ConsumerList__Fields.h>
#if defined(IL2CPP_STRUCT_Targets_ConsumerList__Fields_DEFINED)
#define IL2CPP_STRUCT_Targets_ConsumerList_DEFINED
struct Targets_ConsumerList__Class;
struct Targets_ConsumerList {
    struct Targets_ConsumerList__Class* klass;
    MonitorData* monitor;
    struct Targets_ConsumerList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Targets_ConsumerList_FWDDECL)
#define IL2CPP_STRUCT_Targets_ConsumerList_FWDDECL
#include <Modloader/app/structs/Targets_ConsumerList__Class.h>
#endif
#undef IL2CPP_STRUCT_Targets_ConsumerList_INITIALIZING
#if !defined(IL2CPP_STRUCT_Targets_ConsumerList_DEFINED) && !defined(IL2CPP_STRUCT_Targets_ConsumerList_FWDDECL)
#include <Modloader/app/structs/Targets_ConsumerList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Targets_ConsumerList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
