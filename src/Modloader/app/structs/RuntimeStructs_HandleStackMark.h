#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_HandleStackMark_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_HandleStackMark_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_HandleStackMark_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_HandleStackMark_DEFINED
struct RuntimeStructs_HandleStackMark {
    int32_t size;
    int32_t interior_size;
    void* chunk;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_HandleStackMark_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_HandleStackMark_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_HandleStackMark_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_HandleStackMark_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_HandleStackMark_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_HandleStackMark.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_HandleStackMark.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
