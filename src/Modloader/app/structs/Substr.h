#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Substr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Substr_INITIALIZING
#if !defined(IL2CPP_STRUCT_Substr_DEFINED)
#define IL2CPP_STRUCT_Substr_DEFINED
struct Substr {
    int32_t m_start;
    int32_t m_length;
};
#endif
#if !defined(IL2CPP_STRUCT_Substr_FWDDECL)
#define IL2CPP_STRUCT_Substr_FWDDECL
#endif
#undef IL2CPP_STRUCT_Substr_INITIALIZING
#if !defined(IL2CPP_STRUCT_Substr_DEFINED) && !defined(IL2CPP_STRUCT_Substr_FWDDECL)
#include <Modloader/app/structs/Substr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Substr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
