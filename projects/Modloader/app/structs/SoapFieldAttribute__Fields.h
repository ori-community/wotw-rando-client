#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapFieldAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapFieldAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapFieldAttribute__Fields_DEFINED)
#include <Modloader/app/structs/SoapAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SoapAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapFieldAttribute__Fields_DEFINED
struct String;
struct SoapFieldAttribute__Fields {
    struct SoapAttribute__Fields _;
    struct String* _elementName;
    bool _isElement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoapFieldAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoapFieldAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SoapFieldAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapFieldAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoapFieldAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/SoapFieldAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapFieldAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
