#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceSet__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceSet__Fields_DEFINED
struct IResourceReader;
struct Hashtable;
struct __declspec(align(8)) ResourceSet__Fields {
    struct IResourceReader* Reader;
    struct Hashtable* Table;
    struct Hashtable* _caseInsensitiveTable;
};
#endif
#if !defined(IL2CPP_STRUCT_ResourceSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_ResourceSet__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IResourceReader.h>
#endif
#undef IL2CPP_STRUCT_ResourceSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ResourceSet__Fields_FWDDECL)
#include <Modloader/app/structs/ResourceSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
