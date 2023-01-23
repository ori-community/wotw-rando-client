#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPuppet_DEFINED)
#define IL2CPP_STRUCT_IPuppet_DEFINED
struct IPuppet__Class;
struct IPuppet {
    struct IPuppet__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPuppet_FWDDECL)
#define IL2CPP_STRUCT_IPuppet_FWDDECL
#include <Modloader/app/structs/IPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_IPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPuppet_DEFINED) && !defined(IL2CPP_STRUCT_IPuppet_FWDDECL)
#include <Modloader/app/structs/IPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
