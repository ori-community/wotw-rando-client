#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__Il2CppComObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__Il2CppComObject_INITIALIZING
#if !defined(IL2CPP_STRUCT__Il2CppComObject_DEFINED)
#define IL2CPP_STRUCT__Il2CppComObject_DEFINED
struct _Il2CppComObject__Class;
struct _Il2CppComObject {
    struct _Il2CppComObject__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__Il2CppComObject_FWDDECL)
#define IL2CPP_STRUCT__Il2CppComObject_FWDDECL
#include <Modloader/app/structs/_Il2CppComObject__Class.h>
#endif
#undef IL2CPP_STRUCT__Il2CppComObject_INITIALIZING
#if !defined(IL2CPP_STRUCT__Il2CppComObject_DEFINED) && !defined(IL2CPP_STRUCT__Il2CppComObject_FWDDECL)
#include <Modloader/app/structs/_Il2CppComObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_Il2CppComObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
