#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextInfo__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_TextInfo__Fields_DEFINED
struct String;
struct CultureData;
struct __declspec(align(8)) TextInfo__Fields {
    struct String* m_listSeparator;
    bool m_isReadOnly;
    struct String* m_cultureName;
    struct CultureData* m_cultureData;
    struct String* m_textInfoName;
    struct Nullable_1_Boolean_ m_IsAsciiCasingSameAsInvariant;
    struct String* customCultureName;
    int32_t m_nDataItem;
    bool m_useUserOverride;
    int32_t m_win32LangID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextInfo__Fields_FWDDECL
#include <Modloader/app/structs/CultureData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TextInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextInfo__Fields_FWDDECL)
#include <Modloader/app/structs/TextInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
