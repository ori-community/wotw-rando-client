#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypedReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypedReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedReference_DEFINED)
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeTypeHandle_DEFINED)
#define IL2CPP_STRUCT_TypedReference_DEFINED
struct TypedReference {
    struct RuntimeTypeHandle type;
    void* Value;
    void* Type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypedReference_FWDDECL)
#define IL2CPP_STRUCT_TypedReference_FWDDECL
#endif
#undef IL2CPP_STRUCT_TypedReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedReference_DEFINED) && !defined(IL2CPP_STRUCT_TypedReference_FWDDECL)
#include <Modloader/app/structs/TypedReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypedReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
