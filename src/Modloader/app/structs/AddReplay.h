#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddReplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddReplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddReplay_DEFINED)
#include <Modloader/app/structs/AddReplay__Fields.h>
#if defined(IL2CPP_STRUCT_AddReplay__Fields_DEFINED)
#define IL2CPP_STRUCT_AddReplay_DEFINED
struct AddReplay__Class;
struct AddReplay {
    struct AddReplay__Class* klass;
    MonitorData* monitor;
    struct AddReplay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddReplay_FWDDECL)
#define IL2CPP_STRUCT_AddReplay_FWDDECL
#include <Modloader/app/structs/AddReplay__Class.h>
#endif
#undef IL2CPP_STRUCT_AddReplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddReplay_DEFINED) && !defined(IL2CPP_STRUCT_AddReplay_FWDDECL)
#include <Modloader/app/structs/AddReplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddReplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
