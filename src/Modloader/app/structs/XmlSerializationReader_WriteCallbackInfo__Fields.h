#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationReader_WriteCallbackInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationReader_WriteCallbackInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_WriteCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationReader_WriteCallbackInfo__Fields_DEFINED
struct Type;
struct String;
struct XmlSerializationReadCallback;
struct __declspec(align(8)) XmlSerializationReader_WriteCallbackInfo__Fields {
    struct Type* Type;
    struct String* TypeName;
    struct String* TypeNs;
    struct XmlSerializationReadCallback* Callback;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_WriteCallbackInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationReader_WriteCallbackInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlSerializationReadCallback.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationReader_WriteCallbackInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_WriteCallbackInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationReader_WriteCallbackInfo__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializationReader_WriteCallbackInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationReader_WriteCallbackInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
