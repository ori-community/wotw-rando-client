#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CodePageDataItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CodePageDataItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePageDataItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CodePageDataItem__Fields_DEFINED
struct String;
struct __declspec(align(8)) CodePageDataItem__Fields {
    int32_t m_dataIndex;
    int32_t m_uiFamilyCodePage;
    struct String* m_webName;
    struct String* m_headerName;
    struct String* m_bodyName;
    uint32_t m_flags;
};
#endif
#if !defined(IL2CPP_STRUCT_CodePageDataItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_CodePageDataItem__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CodePageDataItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePageDataItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CodePageDataItem__Fields_FWDDECL)
#include <Modloader/app/structs/CodePageDataItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CodePageDataItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
