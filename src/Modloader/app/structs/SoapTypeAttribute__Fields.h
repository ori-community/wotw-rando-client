#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapTypeAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapTypeAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapTypeAttribute__Fields_DEFINED)
#include <Modloader/app/structs/SoapAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SoapAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapTypeAttribute__Fields_DEFINED
struct String;
struct SoapTypeAttribute__Fields {
    struct SoapAttribute__Fields _;
    bool _useAttribute;
    struct String* _xmlElementName;
    struct String* _xmlNamespace;
    struct String* _xmlTypeName;
    struct String* _xmlTypeNamespace;
    bool _isType;
    bool _isElement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoapTypeAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoapTypeAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SoapTypeAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapTypeAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoapTypeAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/SoapTypeAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapTypeAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
