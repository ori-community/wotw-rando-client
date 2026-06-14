#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int64_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int64_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64_DEFINED)
#define IL2CPP_STRUCT_Int64_DEFINED
struct Int64 {
    int64_t m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_Int64_FWDDECL)
#define IL2CPP_STRUCT_Int64_FWDDECL
#endif
#undef IL2CPP_STRUCT_Int64_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64_DEFINED) && !defined(IL2CPP_STRUCT_Int64_FWDDECL)
#include <Modloader/app/structs/Int64.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int64.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
