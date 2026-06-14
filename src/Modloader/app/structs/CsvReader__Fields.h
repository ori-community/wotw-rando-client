#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CsvReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CsvReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvReader__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Moon_CsvReader_Cell_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Moon_CsvReader_Cell__DEFINED)
#define IL2CPP_STRUCT_CsvReader__Fields_DEFINED
struct StringBuilder;
struct TextReader;
struct __declspec(align(8)) CsvReader__Fields {
    struct StringBuilder* m_sb;
    struct TextReader* m_reader;
    bool m_shouldDisposeReader;
    int32_t m_column;
    int32_t m_row;
    bool m_reachedEnd;
    bool m_peaked;
    struct Nullable_1_Moon_CsvReader_Cell_ m_peakedCell;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CsvReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_CsvReader__Fields_FWDDECL
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/TextReader.h>
#endif
#undef IL2CPP_STRUCT_CsvReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CsvReader__Fields_FWDDECL)
#include <Modloader/app/structs/CsvReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CsvReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
