#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SDK_c_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SDK_c_INITIALIZING
#if !defined(IL2CPP_STRUCT_SDK_c_DEFINED)
#define IL2CPP_STRUCT_SDK_c_DEFINED
struct SDK_c__Class;
struct SDK_c {
    struct SDK_c__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SDK_c_FWDDECL)
#define IL2CPP_STRUCT_SDK_c_FWDDECL
#include <Modloader/app/structs/SDK_c__Class.h>
#endif
#undef IL2CPP_STRUCT_SDK_c_INITIALIZING
#if !defined(IL2CPP_STRUCT_SDK_c_DEFINED) && !defined(IL2CPP_STRUCT_SDK_c_FWDDECL)
#include <Modloader/app/structs/SDK_c.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SDK_c.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
