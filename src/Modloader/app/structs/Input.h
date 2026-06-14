#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_DEFINED)
#define IL2CPP_STRUCT_Input_DEFINED
struct Input__Class;
struct Input {
    struct Input__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Input_FWDDECL)
#define IL2CPP_STRUCT_Input_FWDDECL
#include <Modloader/app/structs/Input__Class.h>
#endif
#undef IL2CPP_STRUCT_Input_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_DEFINED) && !defined(IL2CPP_STRUCT_Input_FWDDECL)
#include <Modloader/app/structs/Input.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
