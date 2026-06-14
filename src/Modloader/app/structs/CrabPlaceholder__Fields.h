#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_CrabPlaceholder__Fields_DEFINED
struct GameObject;
struct CrabPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct GameObject* CrabEntityPrefab;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrabPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_CrabPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrabPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/CrabPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
