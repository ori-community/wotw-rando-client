#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_DEFINED)
#define IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_DEFINED
struct Decimal__Array;
struct __declspec(align(8)) TypedObject_DecimalStruct__Fields {
    bool isDecimal;
    struct Decimal__Array* dvalue;
};
#endif
#if !defined(IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_FWDDECL
#include <Modloader/app/structs/Decimal__Array.h>
#endif
#undef IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_FWDDECL)
#include <Modloader/app/structs/TypedObject_DecimalStruct__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypedObject_DecimalStruct__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
