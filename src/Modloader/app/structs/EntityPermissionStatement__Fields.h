#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPermissionStatement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPermissionStatement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPermissionStatement__Fields_DEFINED)
#include <Modloader/app/structs/EffectType__Enum.h>
#if defined(IL2CPP_STRUCT_EffectType__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityPermissionStatement__Fields_DEFINED
struct String;
struct Object;
struct __declspec(align(8)) EntityPermissionStatement__Fields {
    struct String* Action;
    struct String* Comment;
    struct Object* Condition;
    EffectType__Enum Effect;

    struct Object* Principal;
    struct String* Resource;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPermissionStatement__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityPermissionStatement__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EntityPermissionStatement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPermissionStatement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityPermissionStatement__Fields_FWDDECL)
#include <Modloader/app/structs/EntityPermissionStatement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPermissionStatement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
