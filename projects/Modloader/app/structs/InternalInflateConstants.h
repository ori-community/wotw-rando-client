#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalInflateConstants_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalInflateConstants_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalInflateConstants_DEFINED)
#define IL2CPP_STRUCT_InternalInflateConstants_DEFINED
struct InternalInflateConstants__Class;
struct InternalInflateConstants {
    struct InternalInflateConstants__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InternalInflateConstants_FWDDECL)
#define IL2CPP_STRUCT_InternalInflateConstants_FWDDECL
#include <Modloader/app/structs/InternalInflateConstants__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalInflateConstants_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalInflateConstants_DEFINED) && !defined(IL2CPP_STRUCT_InternalInflateConstants_FWDDECL)
#include <Modloader/app/structs/InternalInflateConstants.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalInflateConstants.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
