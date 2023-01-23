#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemy_DEFINED)
#include <Modloader/app/structs/RammingEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_RammingEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemy_DEFINED
struct RammingEnemy__Class;
struct RammingEnemy {
    struct RammingEnemy__Class* klass;
    MonitorData* monitor;
    struct RammingEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemy_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemy_FWDDECL
#include <Modloader/app/structs/RammingEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemy_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemy_FWDDECL)
#include <Modloader/app/structs/RammingEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
