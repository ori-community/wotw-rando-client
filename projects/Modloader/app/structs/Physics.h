#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Physics_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Physics_INITIALIZING
#if !defined(IL2CPP_STRUCT_Physics_DEFINED)
#define IL2CPP_STRUCT_Physics_DEFINED
struct Physics__Class;
struct Physics {
    struct Physics__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Physics_FWDDECL)
#define IL2CPP_STRUCT_Physics_FWDDECL
#include <Modloader/app/structs/Physics__Class.h>
#endif
#undef IL2CPP_STRUCT_Physics_INITIALIZING
#if !defined(IL2CPP_STRUCT_Physics_DEFINED) && !defined(IL2CPP_STRUCT_Physics_FWDDECL)
#include <Modloader/app/structs/Physics.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Physics.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
