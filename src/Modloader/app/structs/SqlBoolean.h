#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlBoolean_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlBoolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBoolean_DEFINED)
#define IL2CPP_STRUCT_SqlBoolean_DEFINED
struct SqlBoolean {
    uint8_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlBoolean_FWDDECL)
#define IL2CPP_STRUCT_SqlBoolean_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlBoolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBoolean_DEFINED) && !defined(IL2CPP_STRUCT_SqlBoolean_FWDDECL)
#include <Modloader/app/structs/SqlBoolean.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlBoolean.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
