#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TouchWalls_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TouchWalls_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchWalls_DEFINED)
#include <Modloader/app/structs/TouchWalls__Fields.h>
#if defined(IL2CPP_STRUCT_TouchWalls__Fields_DEFINED)
#define IL2CPP_STRUCT_TouchWalls_DEFINED
struct TouchWalls__Class;
struct TouchWalls {
    struct TouchWalls__Class* klass;
    MonitorData* monitor;
    struct TouchWalls__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TouchWalls_FWDDECL)
#define IL2CPP_STRUCT_TouchWalls_FWDDECL
#include <Modloader/app/structs/TouchWalls__Class.h>
#endif
#undef IL2CPP_STRUCT_TouchWalls_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchWalls_DEFINED) && !defined(IL2CPP_STRUCT_TouchWalls_FWDDECL)
#include <Modloader/app/structs/TouchWalls.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TouchWalls.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
