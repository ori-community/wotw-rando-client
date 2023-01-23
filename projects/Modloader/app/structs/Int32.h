#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int32_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int32_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int32_DEFINED)
#define IL2CPP_STRUCT_Int32_DEFINED
struct Int32 {
    int32_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_Int32_FWDDECL)
#define IL2CPP_STRUCT_Int32_FWDDECL
#endif
#undef IL2CPP_STRUCT_Int32_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int32_DEFINED) && !defined(IL2CPP_STRUCT_Int32_FWDDECL)
#include <Modloader/app/structs/Int32.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int32.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
