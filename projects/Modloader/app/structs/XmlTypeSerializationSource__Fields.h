#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_DEFINED)
#include <Modloader/app/structs/SerializationSource__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationSource__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_DEFINED
struct String;
struct Type;
struct XmlTypeSerializationSource__Fields {
    struct SerializationSource__Fields _;
    struct String* attributeOverridesHash;
    struct Type* type;
    struct String* rootHash;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTypeSerializationSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeSerializationSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
