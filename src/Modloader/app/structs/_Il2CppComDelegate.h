#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__Il2CppComDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__Il2CppComDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT__Il2CppComDelegate_DEFINED)
#define IL2CPP_STRUCT__Il2CppComDelegate_DEFINED
struct _Il2CppComDelegate__Class;
struct _Il2CppComDelegate {
    struct _Il2CppComDelegate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__Il2CppComDelegate_FWDDECL)
#define IL2CPP_STRUCT__Il2CppComDelegate_FWDDECL
#include <Modloader/app/structs/_Il2CppComDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT__Il2CppComDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT__Il2CppComDelegate_DEFINED) && !defined(IL2CPP_STRUCT__Il2CppComDelegate_FWDDECL)
#include <Modloader/app/structs/_Il2CppComDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_Il2CppComDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
