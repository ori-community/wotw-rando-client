#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_DEFINED)
#include <Modloader/app/structs/PlaceholderGroup__Fields.h>
#if defined(IL2CPP_STRUCT_PlaceholderGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_DEFINED
struct List_1_BabyCrabEntity_;
struct List_1_CrabEntity_;
struct CrabPlaceholderGroup__Fields {
    struct PlaceholderGroup__Fields _;
    struct List_1_BabyCrabEntity_* Babies;
    struct List_1_CrabEntity_* Mothers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_FWDDECL
#include <Modloader/app/structs/List_1_BabyCrabEntity_.h>
#include <Modloader/app/structs/List_1_CrabEntity_.h>
#endif
#undef IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_FWDDECL)
#include <Modloader/app/structs/CrabPlaceholderGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabPlaceholderGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
