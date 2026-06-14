#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortKey__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortKey__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortKey__Fields_DEFINED)
#include <Modloader/app/structs/CompareOptions__Enum.h>
#if defined(IL2CPP_STRUCT_CompareOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_SortKey__Fields_DEFINED
struct String;
struct Byte__Array;
struct __declspec(align(8)) SortKey__Fields {
    struct String* source;
    struct Byte__Array* key;
    CompareOptions__Enum options;

    int32_t lcid;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortKey__Fields_FWDDECL)
#define IL2CPP_STRUCT_SortKey__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SortKey__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortKey__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SortKey__Fields_FWDDECL)
#include <Modloader/app/structs/SortKey__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortKey__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
