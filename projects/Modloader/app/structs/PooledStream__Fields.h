#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PooledStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PooledStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PooledStream__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Stream__Fields.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_PooledStream__Fields_DEFINED
struct ConnectionPool;
struct WeakReference;
struct IPAddress;
struct NetworkStream;
struct Socket;
struct GeneralAsyncDelegate;
struct PooledStream__Fields {
    struct Stream__Fields _;
    bool m_CheckLifetime;
    struct TimeSpan m_Lifetime;
    struct DateTime m_CreateTime;
    bool m_ConnectionIsDoomed;
    struct ConnectionPool* m_ConnectionPool;
    struct WeakReference* m_Owner;
    int32_t m_PooledCount;
    bool m_Initalizing;
    struct IPAddress* m_ServerAddress;
    struct NetworkStream* m_NetworkStream;
    struct Socket* m_AbortSocket;
    struct Socket* m_AbortSocket6;
    bool m_JustConnected;
    struct GeneralAsyncDelegate* m_AsyncCallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PooledStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_PooledStream__Fields_FWDDECL
#include <Modloader/app/structs/ConnectionPool.h>
#include <Modloader/app/structs/GeneralAsyncDelegate.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/NetworkStream.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/WeakReference.h>
#endif
#undef IL2CPP_STRUCT_PooledStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PooledStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PooledStream__Fields_FWDDECL)
#include <Modloader/app/structs/PooledStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PooledStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
