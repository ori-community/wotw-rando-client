#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enemy_DEFINED)
#include <Modloader/app/structs/Enemy__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy__Fields_DEFINED)
#define IL2CPP_STRUCT_Enemy_DEFINED
struct Enemy__Class;
struct Enemy {
    struct Enemy__Class* klass;
    MonitorData* monitor;
    struct Enemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Enemy_FWDDECL)
#define IL2CPP_STRUCT_Enemy_FWDDECL
#include <Modloader/app/structs/Enemy__Class.h>
#endif
#undef IL2CPP_STRUCT_Enemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enemy_DEFINED) && !defined(IL2CPP_STRUCT_Enemy_FWDDECL)
#include <Modloader/app/structs/Enemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
