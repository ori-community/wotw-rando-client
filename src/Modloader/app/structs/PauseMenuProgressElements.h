#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseMenuProgressElements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseMenuProgressElements_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseMenuProgressElements_DEFINED)
#include <Modloader/app/structs/PauseMenuProgressElements__Fields.h>
#if defined(IL2CPP_STRUCT_PauseMenuProgressElements__Fields_DEFINED)
#define IL2CPP_STRUCT_PauseMenuProgressElements_DEFINED
struct PauseMenuProgressElements__Class;
struct PauseMenuProgressElements {
    struct PauseMenuProgressElements__Class* klass;
    MonitorData* monitor;
    struct PauseMenuProgressElements__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseMenuProgressElements_FWDDECL)
#define IL2CPP_STRUCT_PauseMenuProgressElements_FWDDECL
#include <Modloader/app/structs/PauseMenuProgressElements__Class.h>
#endif
#undef IL2CPP_STRUCT_PauseMenuProgressElements_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseMenuProgressElements_DEFINED) && !defined(IL2CPP_STRUCT_PauseMenuProgressElements_FWDDECL)
#include <Modloader/app/structs/PauseMenuProgressElements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseMenuProgressElements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
