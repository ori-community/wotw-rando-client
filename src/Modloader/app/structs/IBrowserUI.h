#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBrowserUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBrowserUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBrowserUI_DEFINED)
#define IL2CPP_STRUCT_IBrowserUI_DEFINED
struct IBrowserUI__Class;
struct IBrowserUI {
    struct IBrowserUI__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBrowserUI_FWDDECL)
#define IL2CPP_STRUCT_IBrowserUI_FWDDECL
#include <Modloader/app/structs/IBrowserUI__Class.h>
#endif
#undef IL2CPP_STRUCT_IBrowserUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBrowserUI_DEFINED) && !defined(IL2CPP_STRUCT_IBrowserUI_FWDDECL)
#include <Modloader/app/structs/IBrowserUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBrowserUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
