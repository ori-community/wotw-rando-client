#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetworkStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetworkStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkStream__Fields_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_NetworkStream__Fields_DEFINED
struct Socket;
struct NetworkStream__Fields {
    struct Stream__Fields _;
    struct Socket* m_StreamSocket;
    bool m_Readable;
    bool m_Writeable;
    bool m_OwnsSocket;
    int32_t m_CloseTimeout;
    bool m_CleanedUp;
    int32_t m_CurrentReadTimeout;
    int32_t m_CurrentWriteTimeout;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NetworkStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_NetworkStream__Fields_FWDDECL
#include <Modloader/app/structs/Socket.h>
#endif
#undef IL2CPP_STRUCT_NetworkStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NetworkStream__Fields_FWDDECL)
#include <Modloader/app/structs/NetworkStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetworkStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
