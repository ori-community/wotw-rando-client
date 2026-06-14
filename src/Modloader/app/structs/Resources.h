#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Resources_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Resources_INITIALIZING
#if !defined(IL2CPP_STRUCT_Resources_DEFINED)
#define IL2CPP_STRUCT_Resources_DEFINED
struct Resources__Class;
struct Resources {
    struct Resources__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Resources_FWDDECL)
#define IL2CPP_STRUCT_Resources_FWDDECL
#include <Modloader/app/structs/Resources__Class.h>
#endif
#undef IL2CPP_STRUCT_Resources_INITIALIZING
#if !defined(IL2CPP_STRUCT_Resources_DEFINED) && !defined(IL2CPP_STRUCT_Resources_FWDDECL)
#include <Modloader/app/structs/Resources.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Resources.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
