#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlByte_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlByte_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlByte_DEFINED)
#define IL2CPP_STRUCT_SqlByte_DEFINED
struct SqlByte {
    bool m_fNotNull;
    uint8_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlByte_FWDDECL)
#define IL2CPP_STRUCT_SqlByte_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlByte_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlByte_DEFINED) && !defined(IL2CPP_STRUCT_SqlByte_FWDDECL)
#include <Modloader/app/structs/SqlByte.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlByte.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
