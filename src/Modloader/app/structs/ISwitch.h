#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISwitch_DEFINED)
#define IL2CPP_STRUCT_ISwitch_DEFINED
struct ISwitch__Class;
struct ISwitch {
    struct ISwitch__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISwitch_FWDDECL)
#define IL2CPP_STRUCT_ISwitch_FWDDECL
#include <Modloader/app/structs/ISwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_ISwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISwitch_DEFINED) && !defined(IL2CPP_STRUCT_ISwitch_FWDDECL)
#include <Modloader/app/structs/ISwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
