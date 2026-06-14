#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProductInfoHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProductInfoHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProductInfoHeaderValue_DEFINED)
#include <Modloader/app/structs/ProductInfoHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_ProductInfoHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_ProductInfoHeaderValue_DEFINED
struct ProductInfoHeaderValue__Class;
struct ProductInfoHeaderValue {
    struct ProductInfoHeaderValue__Class* klass;
    MonitorData* monitor;
    struct ProductInfoHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProductInfoHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_ProductInfoHeaderValue_FWDDECL
#include <Modloader/app/structs/ProductInfoHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_ProductInfoHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProductInfoHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_ProductInfoHeaderValue_FWDDECL)
#include <Modloader/app/structs/ProductInfoHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProductInfoHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
