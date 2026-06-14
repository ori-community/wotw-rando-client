#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugEnemy_DEFINED)
#include <Modloader/app/structs/SlugEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_SlugEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugEnemy_DEFINED
struct SlugEnemy__Class;
struct SlugEnemy {
    struct SlugEnemy__Class* klass;
    MonitorData* monitor;
    struct SlugEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugEnemy_FWDDECL)
#define IL2CPP_STRUCT_SlugEnemy_FWDDECL
#include <Modloader/app/structs/SlugEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_SlugEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugEnemy_DEFINED) && !defined(IL2CPP_STRUCT_SlugEnemy_FWDDECL)
#include <Modloader/app/structs/SlugEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
