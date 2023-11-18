#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAccess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAccess_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAccess_DEFINED)
#define IL2CPP_STRUCT_TransformAccess_DEFINED
struct TransformAccess {
    void* hierarchy;
    int32_t index;
};
#endif
#if !defined(IL2CPP_STRUCT_TransformAccess_FWDDECL)
#define IL2CPP_STRUCT_TransformAccess_FWDDECL
#endif
#undef IL2CPP_STRUCT_TransformAccess_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAccess_DEFINED) && !defined(IL2CPP_STRUCT_TransformAccess_FWDDECL)
#include <Modloader/app/structs/TransformAccess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAccess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
