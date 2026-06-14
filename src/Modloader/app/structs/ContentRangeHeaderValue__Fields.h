#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContentRangeHeaderValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContentRangeHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentRangeHeaderValue__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int64_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Int64__DEFINED)
#define IL2CPP_STRUCT_ContentRangeHeaderValue__Fields_DEFINED
struct String;
struct __declspec(align(8)) ContentRangeHeaderValue__Fields {
    struct String* unit;
    struct Nullable_1_Int64_ _From_k__BackingField;
    struct Nullable_1_Int64_ _Length_k__BackingField;
    struct Nullable_1_Int64_ _To_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContentRangeHeaderValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContentRangeHeaderValue__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ContentRangeHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentRangeHeaderValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContentRangeHeaderValue__Fields_FWDDECL)
#include <Modloader/app/structs/ContentRangeHeaderValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContentRangeHeaderValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
