#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlReflectionImporter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlReflectionImporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReflectionImporter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlReflectionImporter__Fields_DEFINED
struct String;
struct XmlAttributeOverrides;
struct ArrayList;
struct ReflectionHelper;
struct __declspec(align(8)) XmlReflectionImporter__Fields {
    struct String* initialDefaultNamespace;
    struct XmlAttributeOverrides* attributeOverrides;
    struct ArrayList* includedTypes;
    struct ReflectionHelper* helper;
    int32_t arrayChoiceCount;
    struct ArrayList* relatedMaps;
    bool allowPrivateTypes;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlReflectionImporter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlReflectionImporter__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ReflectionHelper.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlAttributeOverrides.h>
#endif
#undef IL2CPP_STRUCT_XmlReflectionImporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReflectionImporter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlReflectionImporter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlReflectionImporter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlReflectionImporter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
