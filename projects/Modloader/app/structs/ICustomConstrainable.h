#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICustomConstrainable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICustomConstrainable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomConstrainable_DEFINED)
#define IL2CPP_STRUCT_ICustomConstrainable_DEFINED
struct ICustomConstrainable__Class;
struct ICustomConstrainable {
    struct ICustomConstrainable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICustomConstrainable_FWDDECL)
#define IL2CPP_STRUCT_ICustomConstrainable_FWDDECL
#include <Modloader/app/structs/ICustomConstrainable__Class.h>
#endif
#undef IL2CPP_STRUCT_ICustomConstrainable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomConstrainable_DEFINED) && !defined(IL2CPP_STRUCT_ICustomConstrainable_FWDDECL)
#include <Modloader/app/structs/ICustomConstrainable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICustomConstrainable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
