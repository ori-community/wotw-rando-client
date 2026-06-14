#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CsvWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CsvWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_CsvWriter__Fields_DEFINED
struct TextWriter;
struct __declspec(align(8)) CsvWriter__Fields {
    struct TextWriter* m_writer;
    bool m_shouldDisposeWriter;
    int32_t m_column;
    int32_t m_row;
};
#endif
#if !defined(IL2CPP_STRUCT_CsvWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_CsvWriter__Fields_FWDDECL
#include <Modloader/app/structs/TextWriter.h>
#endif
#undef IL2CPP_STRUCT_CsvWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CsvWriter__Fields_FWDDECL)
#include <Modloader/app/structs/CsvWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CsvWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
