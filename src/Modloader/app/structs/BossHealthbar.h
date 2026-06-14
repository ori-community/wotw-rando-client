#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossHealthbar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossHealthbar_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossHealthbar_DEFINED)
#include <Modloader/app/structs/BossHealthbar__Fields.h>
#if defined(IL2CPP_STRUCT_BossHealthbar__Fields_DEFINED)
#define IL2CPP_STRUCT_BossHealthbar_DEFINED
struct BossHealthbar__Class;
struct BossHealthbar {
    struct BossHealthbar__Class* klass;
    MonitorData* monitor;
    struct BossHealthbar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossHealthbar_FWDDECL)
#define IL2CPP_STRUCT_BossHealthbar_FWDDECL
#include <Modloader/app/structs/BossHealthbar__Class.h>
#endif
#undef IL2CPP_STRUCT_BossHealthbar_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossHealthbar_DEFINED) && !defined(IL2CPP_STRUCT_BossHealthbar_FWDDECL)
#include <Modloader/app/structs/BossHealthbar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossHealthbar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
