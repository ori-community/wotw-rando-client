#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_DEFINED)
#include <Modloader/app/structs/GameObjectFilter__Fields.h>
#if defined(IL2CPP_STRUCT_GameObjectFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_DEFINED
struct List_1_System_String_;
struct List_1_System_Type_;
struct HasComponentGameObjectFilter__Fields {
    struct GameObjectFilter__Fields _;
    struct List_1_System_String_* AffectingClasses;
    struct List_1_System_Type_* m_affectingClasses;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_FWDDECL)
#define IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#endif
#undef IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HasComponentGameObjectFilter__Fields_FWDDECL)
#include <Modloader/app/structs/HasComponentGameObjectFilter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasComponentGameObjectFilter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
