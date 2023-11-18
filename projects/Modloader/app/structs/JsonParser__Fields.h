#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser__Fields_DEFINED)
#include <Modloader/app/structs/Substr.h>
#if defined(IL2CPP_STRUCT_Substr_DEFINED)
#define IL2CPP_STRUCT_JsonParser__Fields_DEFINED
struct StringBuilder;
struct String;
struct List_1_System_Int32_;
struct __declspec(align(8)) JsonParser__Fields {
    struct StringBuilder* m_sb;
    struct String* m_source;
    struct Substr m_span;
    bool m_expectSeparator;
    bool m_encounteredParsingError;
    struct List_1_System_Int32_* m_scopes;
    int32_t m_nextIdent;
    int32_t m_activeSlot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonParser__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonParser__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_JsonParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonParser__Fields_FWDDECL)
#include <Modloader/app/structs/JsonParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
