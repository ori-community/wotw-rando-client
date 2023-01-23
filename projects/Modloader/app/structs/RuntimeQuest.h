#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeQuest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeQuest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeQuest_DEFINED)
#include <Modloader/app/structs/RuntimeQuest__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeQuest__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeQuest_DEFINED
struct RuntimeQuest__Class;
struct RuntimeQuest {
    struct RuntimeQuest__Class* klass;
    MonitorData* monitor;
    struct RuntimeQuest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeQuest_FWDDECL)
#define IL2CPP_STRUCT_RuntimeQuest_FWDDECL
#include <Modloader/app/structs/RuntimeQuest__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeQuest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeQuest_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeQuest_FWDDECL)
#include <Modloader/app/structs/RuntimeQuest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeQuest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
