#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Items_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Items_INITIALIZING
#if !defined(IL2CPP_STRUCT_Items_DEFINED)
#define IL2CPP_STRUCT_Items_DEFINED
struct Items__Class;
struct Items {
    struct Items__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Items_FWDDECL)
#define IL2CPP_STRUCT_Items_FWDDECL
#include <Modloader/app/structs/Items__Class.h>
#endif
#undef IL2CPP_STRUCT_Items_INITIALIZING
#if !defined(IL2CPP_STRUCT_Items_DEFINED) && !defined(IL2CPP_STRUCT_Items_FWDDECL)
#include <Modloader/app/structs/Items.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Items.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
