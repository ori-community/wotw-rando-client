#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Shelf__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Shelf__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shelf__Fields_DEFINED)
#define IL2CPP_STRUCT_Shelf__Fields_DEFINED
struct String;
struct List_1_GridObject_;
struct __declspec(align(8)) Shelf__Fields {
    struct String* Name;
    struct List_1_GridObject_* Objects;
    int32_t CurrentGridObjectIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_Shelf__Fields_FWDDECL)
#define IL2CPP_STRUCT_Shelf__Fields_FWDDECL
#include <Modloader/app/structs/List_1_GridObject_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Shelf__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shelf__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Shelf__Fields_FWDDECL)
#include <Modloader/app/structs/Shelf__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Shelf__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
