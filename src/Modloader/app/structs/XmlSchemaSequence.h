#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaSequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSequence_DEFINED)
#include <Modloader/app/structs/XmlSchemaSequence__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaSequence_DEFINED
struct XmlSchemaSequence__Class;
struct XmlSchemaSequence {
    struct XmlSchemaSequence__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaSequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaSequence_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaSequence_FWDDECL
#include <Modloader/app/structs/XmlSchemaSequence__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSequence_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaSequence_FWDDECL)
#include <Modloader/app/structs/XmlSchemaSequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaSequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
