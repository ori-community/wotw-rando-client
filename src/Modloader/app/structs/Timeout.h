#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Timeout_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Timeout_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timeout_DEFINED)
#define IL2CPP_STRUCT_Timeout_DEFINED
struct Timeout__Class;
struct Timeout {
    struct Timeout__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Timeout_FWDDECL)
#define IL2CPP_STRUCT_Timeout_FWDDECL
#include <Modloader/app/structs/Timeout__Class.h>
#endif
#undef IL2CPP_STRUCT_Timeout_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timeout_DEFINED) && !defined(IL2CPP_STRUCT_Timeout_FWDDECL)
#include <Modloader/app/structs/Timeout.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Timeout.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
