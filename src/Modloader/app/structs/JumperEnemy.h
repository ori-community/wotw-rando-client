#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemy_DEFINED)
#include <Modloader/app/structs/JumperEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_JumperEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_JumperEnemy_DEFINED
struct JumperEnemy__Class;
struct JumperEnemy {
    struct JumperEnemy__Class* klass;
    MonitorData* monitor;
    struct JumperEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumperEnemy_FWDDECL)
#define IL2CPP_STRUCT_JumperEnemy_FWDDECL
#include <Modloader/app/structs/JumperEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_JumperEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemy_DEFINED) && !defined(IL2CPP_STRUCT_JumperEnemy_FWDDECL)
#include <Modloader/app/structs/JumperEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
