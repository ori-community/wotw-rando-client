#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SByte_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SByte_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByte_DEFINED)
#define IL2CPP_STRUCT_SByte_DEFINED
struct SByte {
    int8_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_SByte_FWDDECL)
#define IL2CPP_STRUCT_SByte_FWDDECL
#endif
#undef IL2CPP_STRUCT_SByte_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByte_DEFINED) && !defined(IL2CPP_STRUCT_SByte_FWDDECL)
#include <Modloader/app/structs/SByte.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SByte.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
