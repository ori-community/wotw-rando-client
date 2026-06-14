#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OwlEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OwlEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_OwlEnemy_DEFINED)
#include <Modloader/app/structs/OwlEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_OwlEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_OwlEnemy_DEFINED
struct OwlEnemy__Class;
struct OwlEnemy {
    struct OwlEnemy__Class* klass;
    MonitorData* monitor;
    struct OwlEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OwlEnemy_FWDDECL)
#define IL2CPP_STRUCT_OwlEnemy_FWDDECL
#include <Modloader/app/structs/OwlEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_OwlEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_OwlEnemy_DEFINED) && !defined(IL2CPP_STRUCT_OwlEnemy_FWDDECL)
#include <Modloader/app/structs/OwlEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OwlEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
