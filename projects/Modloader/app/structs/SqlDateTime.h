#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDateTime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDateTime_DEFINED)
#define IL2CPP_STRUCT_SqlDateTime_DEFINED
struct SqlDateTime {
    bool m_fNotNull;
    int32_t m_day;
    int32_t m_time;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlDateTime_FWDDECL)
#define IL2CPP_STRUCT_SqlDateTime_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlDateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDateTime_DEFINED) && !defined(IL2CPP_STRUCT_SqlDateTime_FWDDECL)
#include <Modloader/app/structs/SqlDateTime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDateTime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
