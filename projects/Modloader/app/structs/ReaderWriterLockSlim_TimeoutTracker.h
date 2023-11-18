#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReaderWriterLockSlim_TimeoutTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReaderWriterLockSlim_TimeoutTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim_TimeoutTracker_DEFINED)
#define IL2CPP_STRUCT_ReaderWriterLockSlim_TimeoutTracker_DEFINED
struct ReaderWriterLockSlim_TimeoutTracker {
    int32_t m_total;
    int32_t m_start;
};
#endif
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim_TimeoutTracker_FWDDECL)
#define IL2CPP_STRUCT_ReaderWriterLockSlim_TimeoutTracker_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReaderWriterLockSlim_TimeoutTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim_TimeoutTracker_DEFINED) && !defined(IL2CPP_STRUCT_ReaderWriterLockSlim_TimeoutTracker_FWDDECL)
#include <Modloader/app/structs/ReaderWriterLockSlim_TimeoutTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReaderWriterLockSlim_TimeoutTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
