#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FransTech_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FransTech_INITIALIZING
#if !defined(IL2CPP_STRUCT_FransTech_DEFINED)
#define IL2CPP_STRUCT_FransTech_DEFINED
struct FransTech__Class;
struct FransTech {
    struct FransTech__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FransTech_FWDDECL)
#define IL2CPP_STRUCT_FransTech_FWDDECL
#include <Modloader/app/structs/FransTech__Class.h>
#endif
#undef IL2CPP_STRUCT_FransTech_INITIALIZING
#if !defined(IL2CPP_STRUCT_FransTech_DEFINED) && !defined(IL2CPP_STRUCT_FransTech_FWDDECL)
#include <Modloader/app/structs/FransTech.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FransTech.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
