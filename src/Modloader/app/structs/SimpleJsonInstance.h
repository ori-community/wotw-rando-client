#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleJsonInstance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleJsonInstance_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleJsonInstance_DEFINED)
#define IL2CPP_STRUCT_SimpleJsonInstance_DEFINED
struct SimpleJsonInstance__Class;
struct SimpleJsonInstance {
    struct SimpleJsonInstance__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleJsonInstance_FWDDECL)
#define IL2CPP_STRUCT_SimpleJsonInstance_FWDDECL
#include <Modloader/app/structs/SimpleJsonInstance__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleJsonInstance_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleJsonInstance_DEFINED) && !defined(IL2CPP_STRUCT_SimpleJsonInstance_FWDDECL)
#include <Modloader/app/structs/SimpleJsonInstance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleJsonInstance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
