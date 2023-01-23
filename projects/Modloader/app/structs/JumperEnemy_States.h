#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEnemy_States_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEnemy_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemy_States_DEFINED)
#include <Modloader/app/structs/JumperEnemy_States__Fields.h>
#if defined(IL2CPP_STRUCT_JumperEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_JumperEnemy_States_DEFINED
struct JumperEnemy_States__Class;
struct JumperEnemy_States {
    struct JumperEnemy_States__Class* klass;
    MonitorData* monitor;
    struct JumperEnemy_States__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumperEnemy_States_FWDDECL)
#define IL2CPP_STRUCT_JumperEnemy_States_FWDDECL
#include <Modloader/app/structs/JumperEnemy_States__Class.h>
#endif
#undef IL2CPP_STRUCT_JumperEnemy_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemy_States_DEFINED) && !defined(IL2CPP_STRUCT_JumperEnemy_States_FWDDECL)
#include <Modloader/app/structs/JumperEnemy_States.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEnemy_States.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
