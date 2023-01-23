#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemy_DEFINED)
#include <Modloader/app/structs/DashOwlEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_DashOwlEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlEnemy_DEFINED
struct DashOwlEnemy__Class;
struct DashOwlEnemy {
    struct DashOwlEnemy__Class* klass;
    MonitorData* monitor;
    struct DashOwlEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashOwlEnemy_FWDDECL)
#define IL2CPP_STRUCT_DashOwlEnemy_FWDDECL
#include <Modloader/app/structs/DashOwlEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_DashOwlEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemy_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlEnemy_FWDDECL)
#include <Modloader/app/structs/DashOwlEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
