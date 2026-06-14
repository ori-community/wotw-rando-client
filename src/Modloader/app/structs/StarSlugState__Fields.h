#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugState__Fields_DEFINED)
#include <Modloader/app/structs/SlugState__Fields.h>
#if defined(IL2CPP_STRUCT_SlugState__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugState__Fields_DEFINED
struct StarSlugEnemy;
struct StarSlugState__Fields {
    struct SlugState__Fields _;
    struct StarSlugEnemy* StarSlugEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StarSlugState__Fields_FWDDECL)
#define IL2CPP_STRUCT_StarSlugState__Fields_FWDDECL
#include <Modloader/app/structs/StarSlugEnemy.h>
#endif
#undef IL2CPP_STRUCT_StarSlugState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugState__Fields_FWDDECL)
#include <Modloader/app/structs/StarSlugState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
