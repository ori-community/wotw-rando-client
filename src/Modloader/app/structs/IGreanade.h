#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGreanade_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGreanade_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGreanade_DEFINED)
#define IL2CPP_STRUCT_IGreanade_DEFINED
struct IGreanade__Class;
struct IGreanade {
    struct IGreanade__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGreanade_FWDDECL)
#define IL2CPP_STRUCT_IGreanade_FWDDECL
#include <Modloader/app/structs/IGreanade__Class.h>
#endif
#undef IL2CPP_STRUCT_IGreanade_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGreanade_DEFINED) && !defined(IL2CPP_STRUCT_IGreanade_FWDDECL)
#include <Modloader/app/structs/IGreanade.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGreanade.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
