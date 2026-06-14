#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CacheData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CacheData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CacheData__Fields_DEFINED)
#include <Modloader/app/structs/SortingOrder__Enum.h>
#if defined(IL2CPP_STRUCT_SortingOrder__Enum_DEFINED)
#define IL2CPP_STRUCT_CacheData__Fields_DEFINED
struct String;
struct __declspec(align(8)) CacheData__Fields {
    SortingOrder__Enum _SortingOrder_k__BackingField;

    struct String* _Name_k__BackingField;
    int32_t _Value_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CacheData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CacheData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CacheData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CacheData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CacheData__Fields_FWDDECL)
#include <Modloader/app/structs/CacheData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CacheData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
