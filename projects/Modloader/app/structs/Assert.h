#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Assert_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Assert_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assert_DEFINED)
#define IL2CPP_STRUCT_Assert_DEFINED
struct Assert__Class;
struct Assert {
    struct Assert__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Assert_FWDDECL)
#define IL2CPP_STRUCT_Assert_FWDDECL
#include <Modloader/app/structs/Assert__Class.h>
#endif
#undef IL2CPP_STRUCT_Assert_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assert_DEFINED) && !defined(IL2CPP_STRUCT_Assert_FWDDECL)
#include <Modloader/app/structs/Assert.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Assert.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
