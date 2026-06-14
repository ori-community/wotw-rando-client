#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_GPtrArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_GPtrArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GPtrArray_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_GPtrArray_DEFINED
struct RuntimeStructs_GPtrArray {
    void** data;
    int32_t len;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GPtrArray_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_GPtrArray_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_GPtrArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GPtrArray_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_GPtrArray_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_GPtrArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_GPtrArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
