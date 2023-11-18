#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_DEFINED
struct String;
struct ProductHeaderValue;
struct __declspec(align(8)) ProductInfoHeaderValue__Fields {
    struct String* _Comment_k__BackingField;
    struct ProductHeaderValue* _Product_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_FWDDECL
#include <Modloader/app/structs/ProductHeaderValue.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_FWDDECL)
#include <Modloader/app/structs/ProductInfoHeaderValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProductInfoHeaderValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
