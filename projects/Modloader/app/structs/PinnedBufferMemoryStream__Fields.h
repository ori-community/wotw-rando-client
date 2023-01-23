#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/UnmanagedMemoryStream__Fields.h>
#if defined(IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_DEFINED) && defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_DEFINED
struct Byte__Array;
struct PinnedBufferMemoryStream__Fields {
    struct UnmanagedMemoryStream__Fields _;
    struct Byte__Array* _array;
    struct GCHandle _pinningHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_FWDDECL)
#include <Modloader/app/structs/PinnedBufferMemoryStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PinnedBufferMemoryStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
