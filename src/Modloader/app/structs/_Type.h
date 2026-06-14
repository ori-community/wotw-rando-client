#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__Type_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__Type_INITIALIZING
#if !defined(IL2CPP_STRUCT__Type_DEFINED)
#define IL2CPP_STRUCT__Type_DEFINED
struct _Type__Class;
struct _Type {
    struct _Type__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__Type_FWDDECL)
#define IL2CPP_STRUCT__Type_FWDDECL
#include <Modloader/app/structs/_Type__Class.h>
#endif
#undef IL2CPP_STRUCT__Type_INITIALIZING
#if !defined(IL2CPP_STRUCT__Type_DEFINED) && !defined(IL2CPP_STRUCT__Type_FWDDECL)
#include <Modloader/app/structs/_Type.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_Type.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
