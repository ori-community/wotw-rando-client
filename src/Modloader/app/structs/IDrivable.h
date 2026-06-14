#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDrivable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDrivable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDrivable_DEFINED)
#define IL2CPP_STRUCT_IDrivable_DEFINED
struct IDrivable__Class;
struct IDrivable {
    struct IDrivable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDrivable_FWDDECL)
#define IL2CPP_STRUCT_IDrivable_FWDDECL
#include <Modloader/app/structs/IDrivable__Class.h>
#endif
#undef IL2CPP_STRUCT_IDrivable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDrivable_DEFINED) && !defined(IL2CPP_STRUCT_IDrivable_FWDDECL)
#include <Modloader/app/structs/IDrivable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDrivable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
