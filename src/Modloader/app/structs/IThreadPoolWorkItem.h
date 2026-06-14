#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IThreadPoolWorkItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IThreadPoolWorkItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IThreadPoolWorkItem_DEFINED)
#define IL2CPP_STRUCT_IThreadPoolWorkItem_DEFINED
struct IThreadPoolWorkItem__Class;
struct IThreadPoolWorkItem {
    struct IThreadPoolWorkItem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IThreadPoolWorkItem_FWDDECL)
#define IL2CPP_STRUCT_IThreadPoolWorkItem_FWDDECL
#include <Modloader/app/structs/IThreadPoolWorkItem__Class.h>
#endif
#undef IL2CPP_STRUCT_IThreadPoolWorkItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IThreadPoolWorkItem_DEFINED) && !defined(IL2CPP_STRUCT_IThreadPoolWorkItem_FWDDECL)
#include <Modloader/app/structs/IThreadPoolWorkItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IThreadPoolWorkItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
