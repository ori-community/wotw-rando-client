#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeSerializationSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeSerializationSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeSerializationSource_DEFINED)
#include <Modloader/app/structs/XmlTypeSerializationSource__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeSerializationSource__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeSerializationSource_DEFINED
struct XmlTypeSerializationSource__Class;
struct XmlTypeSerializationSource {
    struct XmlTypeSerializationSource__Class* klass;
    MonitorData* monitor;
    struct XmlTypeSerializationSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeSerializationSource_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeSerializationSource_FWDDECL
#include <Modloader/app/structs/XmlTypeSerializationSource__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeSerializationSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeSerializationSource_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeSerializationSource_FWDDECL)
#include <Modloader/app/structs/XmlTypeSerializationSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeSerializationSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
