#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyboardLayoutOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyboardLayoutOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyboardLayoutOptions_DEFINED)
#include <Modloader/app/structs/KeyboardLayoutOptions__Fields.h>
#if defined(IL2CPP_STRUCT_KeyboardLayoutOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_KeyboardLayoutOptions_DEFINED
struct KeyboardLayoutOptions__Class;
struct KeyboardLayoutOptions {
    struct KeyboardLayoutOptions__Class* klass;
    MonitorData* monitor;
    struct KeyboardLayoutOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeyboardLayoutOptions_FWDDECL)
#define IL2CPP_STRUCT_KeyboardLayoutOptions_FWDDECL
#include <Modloader/app/structs/KeyboardLayoutOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyboardLayoutOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyboardLayoutOptions_DEFINED) && !defined(IL2CPP_STRUCT_KeyboardLayoutOptions_FWDDECL)
#include <Modloader/app/structs/KeyboardLayoutOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyboardLayoutOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
