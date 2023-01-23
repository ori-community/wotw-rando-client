#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Warning_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Warning_INITIALIZING
#if !defined(IL2CPP_STRUCT_Warning_DEFINED)
#define IL2CPP_STRUCT_Warning_DEFINED
struct Warning__Class;
struct Warning {
    struct Warning__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Warning_FWDDECL)
#define IL2CPP_STRUCT_Warning_FWDDECL
#include <Modloader/app/structs/Warning__Class.h>
#endif
#undef IL2CPP_STRUCT_Warning_INITIALIZING
#if !defined(IL2CPP_STRUCT_Warning_DEFINED) && !defined(IL2CPP_STRUCT_Warning_FWDDECL)
#include <Modloader/app/structs/Warning.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Warning.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
