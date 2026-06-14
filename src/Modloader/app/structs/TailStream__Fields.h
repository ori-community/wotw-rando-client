#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TailStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TailStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TailStream__Fields_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_TailStream__Fields_DEFINED
struct Byte__Array;
struct TailStream__Fields {
    struct Stream__Fields _;
    struct Byte__Array* _Buffer;
    int32_t _BufferSize;
    int32_t _BufferIndex;
    bool _BufferFull;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TailStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_TailStream__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_TailStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TailStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TailStream__Fields_FWDDECL)
#include <Modloader/app/structs/TailStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TailStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
