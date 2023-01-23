#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KustoDataReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KustoDataReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KustoDataReader__Fields_DEFINED)
#include <Modloader/app/structs/AttributesBasedDataReader__Fields.h>
#if defined(IL2CPP_STRUCT_AttributesBasedDataReader__Fields_DEFINED)
#define IL2CPP_STRUCT_KustoDataReader__Fields_DEFINED
struct String;
struct KustoDataReader__Fields {
    struct AttributesBasedDataReader__Fields _;
    struct String* m_query;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KustoDataReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_KustoDataReader__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_KustoDataReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KustoDataReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KustoDataReader__Fields_FWDDECL)
#include <Modloader/app/structs/KustoDataReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KustoDataReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
