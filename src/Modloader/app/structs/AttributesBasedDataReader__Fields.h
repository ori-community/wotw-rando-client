#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributesBasedDataReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributesBasedDataReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributesBasedDataReader__Fields_DEFINED)
#define IL2CPP_STRUCT_AttributesBasedDataReader__Fields_DEFINED
struct IRequest;
struct Dictionary_2_System_String_System_Object_;
struct __declspec(align(8)) AttributesBasedDataReader__Fields {
    struct IRequest* m_request;
    struct Dictionary_2_System_String_System_Object_* m_body;
    bool m_ignoreNullValues;
};
#endif
#if !defined(IL2CPP_STRUCT_AttributesBasedDataReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_AttributesBasedDataReader__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/IRequest.h>
#endif
#undef IL2CPP_STRUCT_AttributesBasedDataReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributesBasedDataReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AttributesBasedDataReader__Fields_FWDDECL)
#include <Modloader/app/structs/AttributesBasedDataReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributesBasedDataReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
