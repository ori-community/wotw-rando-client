#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_DEFINED)
#define IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_DEFINED
struct EventWaitHandle;
struct __declspec(align(8)) ReaderWriterLockSlim__Fields {
    bool fIsReentrant;
    int32_t myLock;
    uint32_t numWriteWaiters;
    uint32_t numReadWaiters;
    uint32_t numWriteUpgradeWaiters;
    uint32_t numUpgradeWaiters;
    bool fNoWaiters;
    int32_t upgradeLockOwnerId;
    int32_t writeLockOwnerId;
    struct EventWaitHandle* writeEvent;
    struct EventWaitHandle* readEvent;
    struct EventWaitHandle* upgradeEvent;
    struct EventWaitHandle* waitUpgradeEvent;
    int64_t lockID;
    bool fUpgradeThreadHoldingRead;
    uint32_t owners;
    bool fDisposed;
};
#endif
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_FWDDECL
#include <Modloader/app/structs/EventWaitHandle.h>
#endif
#undef IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_FWDDECL)
#include <Modloader/app/structs/ReaderWriterLockSlim__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReaderWriterLockSlim__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
