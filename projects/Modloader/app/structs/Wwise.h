#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Wwise_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Wwise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wwise_DEFINED)
#define IL2CPP_STRUCT_Wwise_DEFINED
struct Wwise__Class;
struct Wwise {
    struct Wwise__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Wwise_FWDDECL)
#define IL2CPP_STRUCT_Wwise_FWDDECL
#include <Modloader/app/structs/Wwise__Class.h>
#endif
#undef IL2CPP_STRUCT_Wwise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wwise_DEFINED) && !defined(IL2CPP_STRUCT_Wwise_FWDDECL)
#include <Modloader/app/structs/Wwise.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Wwise.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
