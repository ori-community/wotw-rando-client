#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Byte_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Byte_INITIALIZING
#if !defined(IL2CPP_STRUCT_Byte_DEFINED)
#define IL2CPP_STRUCT_Byte_DEFINED
struct Byte {
    uint8_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_Byte_FWDDECL)
#define IL2CPP_STRUCT_Byte_FWDDECL
#endif
#undef IL2CPP_STRUCT_Byte_INITIALIZING
#if !defined(IL2CPP_STRUCT_Byte_DEFINED) && !defined(IL2CPP_STRUCT_Byte_FWDDECL)
#include <Modloader/app/structs/Byte.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Byte.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
