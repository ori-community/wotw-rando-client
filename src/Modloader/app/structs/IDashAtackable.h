#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDashAtackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDashAtackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDashAtackable_DEFINED)
#define IL2CPP_STRUCT_IDashAtackable_DEFINED
struct IDashAtackable__Class;
struct IDashAtackable {
    struct IDashAtackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDashAtackable_FWDDECL)
#define IL2CPP_STRUCT_IDashAtackable_FWDDECL
#include <Modloader/app/structs/IDashAtackable__Class.h>
#endif
#undef IL2CPP_STRUCT_IDashAtackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDashAtackable_DEFINED) && !defined(IL2CPP_STRUCT_IDashAtackable_FWDDECL)
#include <Modloader/app/structs/IDashAtackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDashAtackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
