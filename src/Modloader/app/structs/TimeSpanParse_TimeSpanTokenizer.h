#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanParse_TimeSpanTokenizer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanTokenizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanTokenizer_DEFINED)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanTokenizer_DEFINED
struct String;
struct TimeSpanParse_TimeSpanTokenizer {
    int32_t m_pos;
    struct String* m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanTokenizer_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanTokenizer_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanParse_TimeSpanTokenizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanTokenizer_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanTokenizer_FWDDECL)
#include <Modloader/app/structs/TimeSpanParse_TimeSpanTokenizer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanParse_TimeSpanTokenizer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
