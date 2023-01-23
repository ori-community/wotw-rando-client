#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalConstants_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalConstants_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalConstants_DEFINED)
#define IL2CPP_STRUCT_InternalConstants_DEFINED
struct InternalConstants__Class;
struct InternalConstants {
    struct InternalConstants__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InternalConstants_FWDDECL)
#define IL2CPP_STRUCT_InternalConstants_FWDDECL
#include <Modloader/app/structs/InternalConstants__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalConstants_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalConstants_DEFINED) && !defined(IL2CPP_STRUCT_InternalConstants_FWDDECL)
#include <Modloader/app/structs/InternalConstants.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalConstants.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
