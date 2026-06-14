#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_Old_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_Old_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Old_DEFINED)
#define IL2CPP_STRUCT_Input_Old_DEFINED
struct Input_Old__Class;
struct Input_Old {
    struct Input_Old__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Input_Old_FWDDECL)
#define IL2CPP_STRUCT_Input_Old_FWDDECL
#include <Modloader/app/structs/Input_Old__Class.h>
#endif
#undef IL2CPP_STRUCT_Input_Old_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Old_DEFINED) && !defined(IL2CPP_STRUCT_Input_Old_FWDDECL)
#include <Modloader/app/structs/Input_Old.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input_Old.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
