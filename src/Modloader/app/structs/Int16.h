#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int16_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int16_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16_DEFINED)
#define IL2CPP_STRUCT_Int16_DEFINED
struct Int16 {
    int16_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_Int16_FWDDECL)
#define IL2CPP_STRUCT_Int16_FWDDECL
#endif
#undef IL2CPP_STRUCT_Int16_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16_DEFINED) && !defined(IL2CPP_STRUCT_Int16_FWDDECL)
#include <Modloader/app/structs/Int16.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int16.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
