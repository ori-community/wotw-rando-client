#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPushable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPushable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPushable_DEFINED)
#define IL2CPP_STRUCT_IPushable_DEFINED
struct IPushable__Class;
struct IPushable {
    struct IPushable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPushable_FWDDECL)
#define IL2CPP_STRUCT_IPushable_FWDDECL
#include <Modloader/app/structs/IPushable__Class.h>
#endif
#undef IL2CPP_STRUCT_IPushable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPushable_DEFINED) && !defined(IL2CPP_STRUCT_IPushable_FWDDECL)
#include <Modloader/app/structs/IPushable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPushable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
