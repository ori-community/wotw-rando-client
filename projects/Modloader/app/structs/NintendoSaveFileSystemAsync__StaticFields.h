#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NintendoSaveFileSystemAsync__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NintendoSaveFileSystemAsync__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSaveFileSystemAsync__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NintendoSaveFileSystemAsync__StaticFields_DEFINED
struct Queue_1_NSAsyncQueueInfo_;
struct Object;
struct NintendoSaveFileSystemAsync__StaticFields {
    struct Queue_1_NSAsyncQueueInfo_* m_queue;
    bool ShouldUseAsyncQueue;
    bool ShouldUseAsyncQueueForCopy;
    struct Object* WritingLock;
    int32_t preferredCore;
    int32_t coreMask;
    int32_t s_lastPreferredCore;
    int32_t s_lastCoreMask;
    bool ShouldPrintLockDebugMessages;
};
#endif
#if !defined(IL2CPP_STRUCT_NintendoSaveFileSystemAsync__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NintendoSaveFileSystemAsync__StaticFields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_NSAsyncQueueInfo_.h>
#endif
#undef IL2CPP_STRUCT_NintendoSaveFileSystemAsync__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSaveFileSystemAsync__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NintendoSaveFileSystemAsync__StaticFields_FWDDECL)
#include <Modloader/app/structs/NintendoSaveFileSystemAsync__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NintendoSaveFileSystemAsync__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
