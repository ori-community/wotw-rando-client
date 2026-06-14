#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Screen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Screen_INITIALIZING
#if !defined(IL2CPP_STRUCT_Screen_DEFINED)
#define IL2CPP_STRUCT_Screen_DEFINED
struct Screen__Class;
struct Screen {
    struct Screen__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Screen_FWDDECL)
#define IL2CPP_STRUCT_Screen_FWDDECL
#include <Modloader/app/structs/Screen__Class.h>
#endif
#undef IL2CPP_STRUCT_Screen_INITIALIZING
#if !defined(IL2CPP_STRUCT_Screen_DEFINED) && !defined(IL2CPP_STRUCT_Screen_FWDDECL)
#include <Modloader/app/structs/Screen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Screen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
