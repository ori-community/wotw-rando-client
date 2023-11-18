#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScrollLocks_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScrollLocks_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollLocks_DEFINED)
#define IL2CPP_STRUCT_ScrollLocks_DEFINED
struct ScrollLocks__Class;
struct ScrollLocks {
    struct ScrollLocks__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ScrollLocks_FWDDECL)
#define IL2CPP_STRUCT_ScrollLocks_FWDDECL
#include <Modloader/app/structs/ScrollLocks__Class.h>
#endif
#undef IL2CPP_STRUCT_ScrollLocks_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollLocks_DEFINED) && !defined(IL2CPP_STRUCT_ScrollLocks_FWDDECL)
#include <Modloader/app/structs/ScrollLocks.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScrollLocks.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
