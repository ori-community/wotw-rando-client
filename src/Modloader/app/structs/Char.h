#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Char_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Char_INITIALIZING
#if !defined(IL2CPP_STRUCT_Char_DEFINED)
#define IL2CPP_STRUCT_Char_DEFINED
struct Char {
    uint16_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_Char_FWDDECL)
#define IL2CPP_STRUCT_Char_FWDDECL
#endif
#undef IL2CPP_STRUCT_Char_INITIALIZING
#if !defined(IL2CPP_STRUCT_Char_DEFINED) && !defined(IL2CPP_STRUCT_Char_FWDDECL)
#include <Modloader/app/structs/Char.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Char.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
