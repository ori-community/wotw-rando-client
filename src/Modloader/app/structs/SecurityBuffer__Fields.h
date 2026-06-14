#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBuffer__Fields_DEFINED)
#include <Modloader/app/structs/BufferType__Enum.h>
#if defined(IL2CPP_STRUCT_BufferType__Enum_DEFINED)
#define IL2CPP_STRUCT_SecurityBuffer__Fields_DEFINED
struct Byte__Array;
struct SafeHandle;
struct __declspec(align(8)) SecurityBuffer__Fields {
    int32_t size;
    BufferType__Enum type;

    struct Byte__Array* token;
    struct SafeHandle* unmanagedToken;
    int32_t offset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SecurityBuffer__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SafeHandle.h>
#endif
#undef IL2CPP_STRUCT_SecurityBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SecurityBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/SecurityBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
