#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationReader_Fixup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationReader_Fixup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_Fixup__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationReader_Fixup__Fields_DEFINED
struct Object;
struct String__Array;
struct XmlSerializationFixupCallback;
struct __declspec(align(8)) XmlSerializationReader_Fixup__Fields {
    struct Object* source;
    struct String__Array* ids;
    struct XmlSerializationFixupCallback* callback;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_Fixup__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationReader_Fixup__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XmlSerializationFixupCallback.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationReader_Fixup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_Fixup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationReader_Fixup__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializationReader_Fixup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationReader_Fixup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
