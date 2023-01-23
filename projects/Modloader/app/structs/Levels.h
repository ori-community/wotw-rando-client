#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Levels_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Levels_INITIALIZING
#if !defined(IL2CPP_STRUCT_Levels_DEFINED)
#include <Modloader/app/structs/Levels__Fields.h>
#if defined(IL2CPP_STRUCT_Levels__Fields_DEFINED)
#define IL2CPP_STRUCT_Levels_DEFINED
struct Levels__Class;
struct Levels {
    struct Levels__Class* klass;
    MonitorData* monitor;
    struct Levels__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Levels_FWDDECL)
#define IL2CPP_STRUCT_Levels_FWDDECL
#include <Modloader/app/structs/Levels__Class.h>
#endif
#undef IL2CPP_STRUCT_Levels_INITIALIZING
#if !defined(IL2CPP_STRUCT_Levels_DEFINED) && !defined(IL2CPP_STRUCT_Levels_FWDDECL)
#include <Modloader/app/structs/Levels.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Levels.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
