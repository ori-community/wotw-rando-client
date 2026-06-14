#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArmouredRammingEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArmouredRammingEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArmouredRammingEnemy_DEFINED)
#include <Modloader/app/structs/ArmouredRammingEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_ArmouredRammingEnemy_DEFINED
struct ArmouredRammingEnemy__Class;
struct ArmouredRammingEnemy {
    struct ArmouredRammingEnemy__Class* klass;
    MonitorData* monitor;
    struct ArmouredRammingEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArmouredRammingEnemy_FWDDECL)
#define IL2CPP_STRUCT_ArmouredRammingEnemy_FWDDECL
#include <Modloader/app/structs/ArmouredRammingEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_ArmouredRammingEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArmouredRammingEnemy_DEFINED) && !defined(IL2CPP_STRUCT_ArmouredRammingEnemy_FWDDECL)
#include <Modloader/app/structs/ArmouredRammingEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArmouredRammingEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
