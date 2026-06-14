#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_DEFINED)
#define IL2CPP_STRUCT_UI_DEFINED
struct UI__Class;
struct UI {
    struct UI__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UI_FWDDECL)
#define IL2CPP_STRUCT_UI_FWDDECL
#include <Modloader/app/structs/UI__Class.h>
#endif
#undef IL2CPP_STRUCT_UI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_DEFINED) && !defined(IL2CPP_STRUCT_UI_FWDDECL)
#include <Modloader/app/structs/UI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
