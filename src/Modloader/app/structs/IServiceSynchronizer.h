#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IServiceSynchronizer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IServiceSynchronizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServiceSynchronizer_DEFINED)
#define IL2CPP_STRUCT_IServiceSynchronizer_DEFINED
struct IServiceSynchronizer__Class;
struct IServiceSynchronizer {
    struct IServiceSynchronizer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IServiceSynchronizer_FWDDECL)
#define IL2CPP_STRUCT_IServiceSynchronizer_FWDDECL
#include <Modloader/app/structs/IServiceSynchronizer__Class.h>
#endif
#undef IL2CPP_STRUCT_IServiceSynchronizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServiceSynchronizer_DEFINED) && !defined(IL2CPP_STRUCT_IServiceSynchronizer_FWDDECL)
#include <Modloader/app/structs/IServiceSynchronizer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IServiceSynchronizer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
