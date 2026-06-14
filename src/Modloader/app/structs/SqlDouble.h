#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDouble_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDouble_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDouble_DEFINED)
#define IL2CPP_STRUCT_SqlDouble_DEFINED
struct SqlDouble {
    bool m_fNotNull;
    double m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlDouble_FWDDECL)
#define IL2CPP_STRUCT_SqlDouble_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlDouble_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDouble_DEFINED) && !defined(IL2CPP_STRUCT_SqlDouble_FWDDECL)
#include <Modloader/app/structs/SqlDouble.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDouble.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
