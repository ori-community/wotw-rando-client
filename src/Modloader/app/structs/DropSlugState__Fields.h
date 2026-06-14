#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugState__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugState__Fields_DEFINED
struct DropSlugEnemy;
struct __declspec(align(8)) DropSlugState__Fields {
    struct DropSlugEnemy* Slug;
};
#endif
#if !defined(IL2CPP_STRUCT_DropSlugState__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugState__Fields_FWDDECL
#include <Modloader/app/structs/DropSlugEnemy.h>
#endif
#undef IL2CPP_STRUCT_DropSlugState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugState__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
