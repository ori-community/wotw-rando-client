#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CryptoAPITransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CryptoAPITransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoAPITransform_DEFINED)
#include <Modloader/app/structs/CryptoAPITransform__Fields.h>
#if defined(IL2CPP_STRUCT_CryptoAPITransform__Fields_DEFINED)
#define IL2CPP_STRUCT_CryptoAPITransform_DEFINED
struct CryptoAPITransform__Class;
struct CryptoAPITransform {
    struct CryptoAPITransform__Class* klass;
    MonitorData* monitor;
    struct CryptoAPITransform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CryptoAPITransform_FWDDECL)
#define IL2CPP_STRUCT_CryptoAPITransform_FWDDECL
#include <Modloader/app/structs/CryptoAPITransform__Class.h>
#endif
#undef IL2CPP_STRUCT_CryptoAPITransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoAPITransform_DEFINED) && !defined(IL2CPP_STRUCT_CryptoAPITransform_FWDDECL)
#include <Modloader/app/structs/CryptoAPITransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CryptoAPITransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
