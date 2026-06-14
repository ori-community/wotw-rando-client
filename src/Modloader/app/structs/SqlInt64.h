#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlInt64_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt64_DEFINED)
#define IL2CPP_STRUCT_SqlInt64_DEFINED
struct SqlInt64 {
    bool m_fNotNull;
    int64_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlInt64_FWDDECL)
#define IL2CPP_STRUCT_SqlInt64_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt64_DEFINED) && !defined(IL2CPP_STRUCT_SqlInt64_FWDDECL)
#include <Modloader/app/structs/SqlInt64.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlInt64.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
