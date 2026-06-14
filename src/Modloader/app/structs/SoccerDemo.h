#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoccerDemo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoccerDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoccerDemo_DEFINED)
#include <Modloader/app/structs/SoccerDemo__Fields.h>
#if defined(IL2CPP_STRUCT_SoccerDemo__Fields_DEFINED)
#define IL2CPP_STRUCT_SoccerDemo_DEFINED
struct SoccerDemo__Class;
struct SoccerDemo {
    struct SoccerDemo__Class* klass;
    MonitorData* monitor;
    struct SoccerDemo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoccerDemo_FWDDECL)
#define IL2CPP_STRUCT_SoccerDemo_FWDDECL
#include <Modloader/app/structs/SoccerDemo__Class.h>
#endif
#undef IL2CPP_STRUCT_SoccerDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoccerDemo_DEFINED) && !defined(IL2CPP_STRUCT_SoccerDemo_FWDDECL)
#include <Modloader/app/structs/SoccerDemo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoccerDemo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
