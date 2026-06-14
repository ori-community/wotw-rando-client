#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XGRInterop_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XGRInterop_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGRInterop_DEFINED)
#define IL2CPP_STRUCT_XGRInterop_DEFINED
struct XGRInterop__Class;
struct XGRInterop {
    struct XGRInterop__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XGRInterop_FWDDECL)
#define IL2CPP_STRUCT_XGRInterop_FWDDECL
#include <Modloader/app/structs/XGRInterop__Class.h>
#endif
#undef IL2CPP_STRUCT_XGRInterop_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGRInterop_DEFINED) && !defined(IL2CPP_STRUCT_XGRInterop_FWDDECL)
#include <Modloader/app/structs/XGRInterop.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XGRInterop.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
