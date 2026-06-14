#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaElement__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaElement__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaElement__Array_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaElement__Array_DEFINED
struct XmlSchemaElement__Array__Class;
struct XmlSchemaElement;
struct XmlSchemaElement__Array {
    struct XmlSchemaElement__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct XmlSchemaElement* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaElement__Array_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaElement__Array_FWDDECL
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaElement__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaElement__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaElement__Array_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaElement__Array_FWDDECL)
#include <Modloader/app/structs/XmlSchemaElement__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaElement__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
