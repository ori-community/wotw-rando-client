#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlString_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlString_DEFINED)
#include <Modloader/app/structs/SqlCompareOptions__Enum.h>
#if defined(IL2CPP_STRUCT_SqlCompareOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_SqlString_DEFINED
struct String;
struct CompareInfo;
struct SqlString {
    struct String* m_value;
    struct CompareInfo* m_cmpInfo;
    int32_t m_lcid;
    SqlCompareOptions__Enum m_flag;

    bool m_fNotNull;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlString_FWDDECL)
#define IL2CPP_STRUCT_SqlString_FWDDECL
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SqlString_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlString_DEFINED) && !defined(IL2CPP_STRUCT_SqlString_FWDDECL)
#include <Modloader/app/structs/SqlString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
