#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaceholderGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaceholderGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaceholderGroup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaceholderGroup__Fields_DEFINED
struct List_1_EntityPlaceholder_;
struct PlaceholderGroup__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_EntityPlaceholder_* PlaceholdersInGroup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaceholderGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlaceholderGroup__Fields_FWDDECL
#include <Modloader/app/structs/List_1_EntityPlaceholder_.h>
#endif
#undef IL2CPP_STRUCT_PlaceholderGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaceholderGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlaceholderGroup__Fields_FWDDECL)
#include <Modloader/app/structs/PlaceholderGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaceholderGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
