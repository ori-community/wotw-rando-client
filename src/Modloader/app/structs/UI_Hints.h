#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UI_Hints_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UI_Hints_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_Hints_DEFINED)
#define IL2CPP_STRUCT_UI_Hints_DEFINED
struct UI_Hints__Class;
struct UI_Hints {
    struct UI_Hints__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UI_Hints_FWDDECL)
#define IL2CPP_STRUCT_UI_Hints_FWDDECL
#include <Modloader/app/structs/UI_Hints__Class.h>
#endif
#undef IL2CPP_STRUCT_UI_Hints_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_Hints_DEFINED) && !defined(IL2CPP_STRUCT_UI_Hints_FWDDECL)
#include <Modloader/app/structs/UI_Hints.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UI_Hints.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
