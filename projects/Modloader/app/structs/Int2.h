#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int2_DEFINED)
#define IL2CPP_STRUCT_Int2_DEFINED
struct Int2 {
    int32_t x;
    int32_t y;
};
#endif
#if !defined(IL2CPP_STRUCT_Int2_FWDDECL)
#define IL2CPP_STRUCT_Int2_FWDDECL
#endif
#undef IL2CPP_STRUCT_Int2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int2_DEFINED) && !defined(IL2CPP_STRUCT_Int2_FWDDECL)
#include <Modloader/app/structs/Int2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
