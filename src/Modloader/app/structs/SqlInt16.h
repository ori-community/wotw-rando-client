#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlInt16_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlInt16_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt16_DEFINED)
#define IL2CPP_STRUCT_SqlInt16_DEFINED
struct SqlInt16 {
    bool m_fNotNull;
    int16_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlInt16_FWDDECL)
#define IL2CPP_STRUCT_SqlInt16_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlInt16_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt16_DEFINED) && !defined(IL2CPP_STRUCT_SqlInt16_FWDDECL)
#include <Modloader/app/structs/SqlInt16.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlInt16.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
