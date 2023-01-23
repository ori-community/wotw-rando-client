#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossHealthbar2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossHealthbar2_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossHealthbar2_DEFINED)
#include <Modloader/app/structs/BossHealthbar2__Fields.h>
#if defined(IL2CPP_STRUCT_BossHealthbar2__Fields_DEFINED)
#define IL2CPP_STRUCT_BossHealthbar2_DEFINED
struct BossHealthbar2__Class;
struct BossHealthbar2 {
    struct BossHealthbar2__Class* klass;
    MonitorData* monitor;
    struct BossHealthbar2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossHealthbar2_FWDDECL)
#define IL2CPP_STRUCT_BossHealthbar2_FWDDECL
#include <Modloader/app/structs/BossHealthbar2__Class.h>
#endif
#undef IL2CPP_STRUCT_BossHealthbar2_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossHealthbar2_DEFINED) && !defined(IL2CPP_STRUCT_BossHealthbar2_FWDDECL)
#include <Modloader/app/structs/BossHealthbar2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossHealthbar2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
