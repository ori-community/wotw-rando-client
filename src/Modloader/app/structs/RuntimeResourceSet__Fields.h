#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeResourceSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeResourceSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeResourceSet__Fields_DEFINED)
#include <Modloader/app/structs/ResourceSet__Fields.h>
#if defined(IL2CPP_STRUCT_ResourceSet__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeResourceSet__Fields_DEFINED
struct Dictionary_2_System_String_System_Resources_ResourceLocator_;
struct ResourceReader;
struct RuntimeResourceSet__Fields {
    struct ResourceSet__Fields _;
    struct Dictionary_2_System_String_System_Resources_ResourceLocator_* _resCache;
    struct ResourceReader* _defaultReader;
    struct Dictionary_2_System_String_System_Resources_ResourceLocator_* _caseInsensitiveTable;
    bool _haveReadFromReader;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeResourceSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeResourceSet__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceLocator_.h>
#include <Modloader/app/structs/ResourceReader.h>
#endif
#undef IL2CPP_STRUCT_RuntimeResourceSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeResourceSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeResourceSet__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeResourceSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeResourceSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
