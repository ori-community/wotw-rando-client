#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Level2Map_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Level2Map_INITIALIZING
#if !defined(IL2CPP_STRUCT_Level2Map_DEFINED)
#include <Modloader/app/structs/Level2Map__Fields.h>
#if defined(IL2CPP_STRUCT_Level2Map__Fields_DEFINED)
#define IL2CPP_STRUCT_Level2Map_DEFINED
struct Level2Map__Class;
struct Level2Map {
    struct Level2Map__Class* klass;
    MonitorData* monitor;
    struct Level2Map__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Level2Map_FWDDECL)
#define IL2CPP_STRUCT_Level2Map_FWDDECL
#include <Modloader/app/structs/Level2Map__Class.h>
#endif
#undef IL2CPP_STRUCT_Level2Map_INITIALIZING
#if !defined(IL2CPP_STRUCT_Level2Map_DEFINED) && !defined(IL2CPP_STRUCT_Level2Map_FWDDECL)
#include <Modloader/app/structs/Level2Map.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Level2Map.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
