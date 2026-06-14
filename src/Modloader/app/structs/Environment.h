#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Environment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Environment_INITIALIZING
#if !defined(IL2CPP_STRUCT_Environment_DEFINED)
#define IL2CPP_STRUCT_Environment_DEFINED
struct Environment__Class;
struct Environment {
    struct Environment__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Environment_FWDDECL)
#define IL2CPP_STRUCT_Environment_FWDDECL
#include <Modloader/app/structs/Environment__Class.h>
#endif
#undef IL2CPP_STRUCT_Environment_INITIALIZING
#if !defined(IL2CPP_STRUCT_Environment_DEFINED) && !defined(IL2CPP_STRUCT_Environment_FWDDECL)
#include <Modloader/app/structs/Environment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Environment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
