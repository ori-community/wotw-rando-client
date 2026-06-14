#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPooled_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPooled_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPooled_DEFINED)
#define IL2CPP_STRUCT_IPooled_DEFINED
struct IPooled__Class;
struct IPooled {
    struct IPooled__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPooled_FWDDECL)
#define IL2CPP_STRUCT_IPooled_FWDDECL
#include <Modloader/app/structs/IPooled__Class.h>
#endif
#undef IL2CPP_STRUCT_IPooled_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPooled_DEFINED) && !defined(IL2CPP_STRUCT_IPooled_FWDDECL)
#include <Modloader/app/structs/IPooled.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPooled.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
