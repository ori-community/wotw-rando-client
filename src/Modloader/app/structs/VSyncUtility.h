#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VSyncUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VSyncUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_VSyncUtility_DEFINED)
#define IL2CPP_STRUCT_VSyncUtility_DEFINED
struct VSyncUtility__Class;
struct VSyncUtility {
    struct VSyncUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_VSyncUtility_FWDDECL)
#define IL2CPP_STRUCT_VSyncUtility_FWDDECL
#include <Modloader/app/structs/VSyncUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_VSyncUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_VSyncUtility_DEFINED) && !defined(IL2CPP_STRUCT_VSyncUtility_FWDDECL)
#include <Modloader/app/structs/VSyncUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VSyncUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
