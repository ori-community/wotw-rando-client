#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUpdateable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUpdateable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateable_DEFINED)
#define IL2CPP_STRUCT_IUpdateable_DEFINED
struct IUpdateable__Class;
struct IUpdateable {
    struct IUpdateable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUpdateable_FWDDECL)
#define IL2CPP_STRUCT_IUpdateable_FWDDECL
#include <Modloader/app/structs/IUpdateable__Class.h>
#endif
#undef IL2CPP_STRUCT_IUpdateable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateable_DEFINED) && !defined(IL2CPP_STRUCT_IUpdateable_FWDDECL)
#include <Modloader/app/structs/IUpdateable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUpdateable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
