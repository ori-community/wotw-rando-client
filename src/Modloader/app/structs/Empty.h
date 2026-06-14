#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Empty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Empty_INITIALIZING
#if !defined(IL2CPP_STRUCT_Empty_DEFINED)
#define IL2CPP_STRUCT_Empty_DEFINED
struct Empty__Class;
struct Empty {
    struct Empty__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Empty_FWDDECL)
#define IL2CPP_STRUCT_Empty_FWDDECL
#include <Modloader/app/structs/Empty__Class.h>
#endif
#undef IL2CPP_STRUCT_Empty_INITIALIZING
#if !defined(IL2CPP_STRUCT_Empty_DEFINED) && !defined(IL2CPP_STRUCT_Empty_FWDDECL)
#include <Modloader/app/structs/Empty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Empty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
