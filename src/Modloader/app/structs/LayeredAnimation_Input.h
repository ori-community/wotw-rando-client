#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayeredAnimation_Input_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayeredAnimation_Input_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredAnimation_Input_DEFINED)
#include <Modloader/app/structs/LayeredAnimation_Input__Fields.h>
#if defined(IL2CPP_STRUCT_LayeredAnimation_Input__Fields_DEFINED)
#define IL2CPP_STRUCT_LayeredAnimation_Input_DEFINED
struct LayeredAnimation_Input__Class;
struct LayeredAnimation_Input {
    struct LayeredAnimation_Input__Class* klass;
    MonitorData* monitor;
    struct LayeredAnimation_Input__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayeredAnimation_Input_FWDDECL)
#define IL2CPP_STRUCT_LayeredAnimation_Input_FWDDECL
#include <Modloader/app/structs/LayeredAnimation_Input__Class.h>
#endif
#undef IL2CPP_STRUCT_LayeredAnimation_Input_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredAnimation_Input_DEFINED) && !defined(IL2CPP_STRUCT_LayeredAnimation_Input_FWDDECL)
#include <Modloader/app/structs/LayeredAnimation_Input.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayeredAnimation_Input.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
