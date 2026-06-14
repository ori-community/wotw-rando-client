#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_InputButtonProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_InputButtonProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_InputButtonProcessor_DEFINED)
#include <Modloader/app/structs/Input_InputButtonProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_Input_InputButtonProcessor_DEFINED
struct Input_InputButtonProcessor__Class;
struct Input_InputButtonProcessor {
    struct Input_InputButtonProcessor__Class* klass;
    MonitorData* monitor;
    struct Input_InputButtonProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Input_InputButtonProcessor_FWDDECL)
#define IL2CPP_STRUCT_Input_InputButtonProcessor_FWDDECL
#include <Modloader/app/structs/Input_InputButtonProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_Input_InputButtonProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_InputButtonProcessor_DEFINED) && !defined(IL2CPP_STRUCT_Input_InputButtonProcessor_FWDDECL)
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
