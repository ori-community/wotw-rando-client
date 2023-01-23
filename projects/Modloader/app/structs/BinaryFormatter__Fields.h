#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryFormatter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryFormatter__Fields_DEFINED)
#include <Modloader/app/structs/FormatterAssemblyStyle__Enum.h>
#include <Modloader/app/structs/FormatterTypeStyle__Enum.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/TypeFilterLevel__Enum.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED) && defined(IL2CPP_STRUCT_FormatterTypeStyle__Enum_DEFINED) && defined(IL2CPP_STRUCT_FormatterAssemblyStyle__Enum_DEFINED) && defined(IL2CPP_STRUCT_TypeFilterLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_BinaryFormatter__Fields_DEFINED
struct ISurrogateSelector;
struct SerializationBinder;
struct Object__Array;
struct __declspec(align(8)) BinaryFormatter__Fields {
    struct ISurrogateSelector* m_surrogates;
    struct StreamingContext m_context;
    struct SerializationBinder* m_binder;
    FormatterTypeStyle__Enum m_typeFormat;

    FormatterAssemblyStyle__Enum m_assemblyFormat;

    TypeFilterLevel__Enum m_securityLevel;

    struct Object__Array* m_crossAppDomainArray;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryFormatter__Fields_FWDDECL)
#define IL2CPP_STRUCT_BinaryFormatter__Fields_FWDDECL
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SerializationBinder.h>
#endif
#undef IL2CPP_STRUCT_BinaryFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryFormatter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BinaryFormatter__Fields_FWDDECL)
#include <Modloader/app/structs/BinaryFormatter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryFormatter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
