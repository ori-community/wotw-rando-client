#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthState__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthState__Boxed_DEFINED)
#include <Modloader/app/structs/DepthState.h>
#if defined(IL2CPP_STRUCT_DepthState_DEFINED)
#define IL2CPP_STRUCT_DepthState__Boxed_DEFINED
struct DepthState__Class;
struct DepthState__Boxed {
    struct DepthState__Class* klass;
    MonitorData* monitor;
    struct DepthState fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthState__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DepthState__Boxed_FWDDECL
#include <Modloader/app/structs/DepthState__Class.h>
#endif
#undef IL2CPP_STRUCT_DepthState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthState__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DepthState__Boxed_FWDDECL)
#include <Modloader/app/structs/DepthState__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthState__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
