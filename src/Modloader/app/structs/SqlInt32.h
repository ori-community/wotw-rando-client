#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlInt32_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlInt32_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt32_DEFINED)
#define IL2CPP_STRUCT_SqlInt32_DEFINED
struct SqlInt32 {
    bool m_fNotNull;
    int32_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlInt32_FWDDECL)
#define IL2CPP_STRUCT_SqlInt32_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlInt32_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt32_DEFINED) && !defined(IL2CPP_STRUCT_SqlInt32_FWDDECL)
#include <Modloader/app/structs/SqlInt32.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlInt32.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
