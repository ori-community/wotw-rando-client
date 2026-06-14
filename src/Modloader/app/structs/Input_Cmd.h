#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_Cmd_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_Cmd_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Cmd_DEFINED)
#define IL2CPP_STRUCT_Input_Cmd_DEFINED
struct Input_Cmd__Class;
struct Input_Cmd {
    struct Input_Cmd__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Input_Cmd_FWDDECL)
#define IL2CPP_STRUCT_Input_Cmd_FWDDECL
#include <Modloader/app/structs/Input_Cmd__Class.h>
#endif
#undef IL2CPP_STRUCT_Input_Cmd_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Cmd_DEFINED) && !defined(IL2CPP_STRUCT_Input_Cmd_FWDDECL)
#include <Modloader/app/structs/Input_Cmd.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input_Cmd.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
