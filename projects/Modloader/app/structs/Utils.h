#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Utils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Utils_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utils_DEFINED)
#define IL2CPP_STRUCT_Utils_DEFINED
struct Utils__Class;
struct Utils {
    struct Utils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Utils_FWDDECL)
#define IL2CPP_STRUCT_Utils_FWDDECL
#include <Modloader/app/structs/Utils__Class.h>
#endif
#undef IL2CPP_STRUCT_Utils_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utils_DEFINED) && !defined(IL2CPP_STRUCT_Utils_FWDDECL)
#include <Modloader/app/structs/Utils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Utils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
