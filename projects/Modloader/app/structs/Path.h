#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Path_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Path_INITIALIZING
#if !defined(IL2CPP_STRUCT_Path_DEFINED)
#define IL2CPP_STRUCT_Path_DEFINED
struct Path__Class;
struct Path {
    struct Path__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Path_FWDDECL)
#define IL2CPP_STRUCT_Path_FWDDECL
#include <Modloader/app/structs/Path__Class.h>
#endif
#undef IL2CPP_STRUCT_Path_INITIALIZING
#if !defined(IL2CPP_STRUCT_Path_DEFINED) && !defined(IL2CPP_STRUCT_Path_FWDDECL)
#include <Modloader/app/structs/Path.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Path.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
