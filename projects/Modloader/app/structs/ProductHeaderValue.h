#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProductHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProductHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProductHeaderValue_DEFINED)
#include <Modloader/app/structs/ProductHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_ProductHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_ProductHeaderValue_DEFINED
struct ProductHeaderValue__Class;
struct ProductHeaderValue {
    struct ProductHeaderValue__Class* klass;
    MonitorData* monitor;
    struct ProductHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProductHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_ProductHeaderValue_FWDDECL
#include <Modloader/app/structs/ProductHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_ProductHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProductHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_ProductHeaderValue_FWDDECL)
#include <Modloader/app/structs/ProductHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProductHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
