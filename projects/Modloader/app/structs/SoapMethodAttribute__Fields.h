#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapMethodAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapMethodAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapMethodAttribute__Fields_DEFINED)
#include <Modloader/app/structs/SoapAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SoapAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapMethodAttribute__Fields_DEFINED
struct String;
struct SoapMethodAttribute__Fields {
    struct SoapAttribute__Fields _;
    struct String* _responseElement;
    struct String* _responseNamespace;
    struct String* _returnElement;
    struct String* _soapAction;
    bool _useAttribute;
    struct String* _namespace;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoapMethodAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoapMethodAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SoapMethodAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapMethodAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoapMethodAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/SoapMethodAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapMethodAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
