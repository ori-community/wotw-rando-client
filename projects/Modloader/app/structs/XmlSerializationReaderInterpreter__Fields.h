#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationReaderInterpreter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationReaderInterpreter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReaderInterpreter__Fields_DEFINED)
#include <Modloader/app/structs/SerializationFormat__Enum.h>
#include <Modloader/app/structs/XmlSerializationReader__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializationReader__Fields_DEFINED) && defined(IL2CPP_STRUCT_SerializationFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationReaderInterpreter__Fields_DEFINED
struct XmlMapping;
struct XmlSerializationReaderInterpreter__Fields {
    struct XmlSerializationReader__Fields _;
    struct XmlMapping* _typeMap;
    SerializationFormat__Enum _format;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationReaderInterpreter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationReaderInterpreter__Fields_FWDDECL
#include <Modloader/app/structs/XmlMapping.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationReaderInterpreter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReaderInterpreter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationReaderInterpreter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializationReaderInterpreter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationReaderInterpreter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
