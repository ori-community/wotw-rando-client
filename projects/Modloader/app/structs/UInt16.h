#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt16_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt16_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16_DEFINED)
#define IL2CPP_STRUCT_UInt16_DEFINED
struct UInt16 {
    uint16_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_UInt16_FWDDECL)
#define IL2CPP_STRUCT_UInt16_FWDDECL
#endif
#undef IL2CPP_STRUCT_UInt16_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16_DEFINED) && !defined(IL2CPP_STRUCT_UInt16_FWDDECL)
#include <Modloader/app/structs/UInt16.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt16.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
