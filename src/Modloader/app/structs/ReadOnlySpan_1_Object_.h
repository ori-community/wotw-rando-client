#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadOnlySpan_1_Object__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadOnlySpan_1_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadOnlySpan_1_Object__DEFINED)
#define IL2CPP_STRUCT_ReadOnlySpan_1_Object__DEFINED
struct Pinnable_1_Object_;
struct ReadOnlySpan_1_Object_ {
    struct Pinnable_1_Object_* _pinnable;
    void* _byteOffset;
    int32_t _length;
};
#endif
#if !defined(IL2CPP_STRUCT_ReadOnlySpan_1_Object__FWDDECL)
#define IL2CPP_STRUCT_ReadOnlySpan_1_Object__FWDDECL
#include <Modloader/app/structs/Pinnable_1_Object_.h>
#endif
#undef IL2CPP_STRUCT_ReadOnlySpan_1_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadOnlySpan_1_Object__DEFINED) && !defined(IL2CPP_STRUCT_ReadOnlySpan_1_Object__FWDDECL)
#include <Modloader/app/structs/ReadOnlySpan_1_Object_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadOnlySpan_1_Object_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
