#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Button_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Button_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button_DEFINED)
#include <Modloader/app/structs/Button__Fields.h>
#if defined(IL2CPP_STRUCT_Button__Fields_DEFINED)
#define IL2CPP_STRUCT_Button_DEFINED
struct Button__Class;
struct Button {
    struct Button__Class* klass;
    MonitorData* monitor;
    struct Button__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Button_FWDDECL)
#define IL2CPP_STRUCT_Button_FWDDECL
#include <Modloader/app/structs/Button__Class.h>
#endif
#undef IL2CPP_STRUCT_Button_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button_DEFINED) && !defined(IL2CPP_STRUCT_Button_FWDDECL)
#include <Modloader/app/structs/Button.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Button.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
