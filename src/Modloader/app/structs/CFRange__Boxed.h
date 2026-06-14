#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFRange__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFRange__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFRange__Boxed_DEFINED)
#include <Modloader/app/structs/CFRange.h>
#if defined(IL2CPP_STRUCT_CFRange_DEFINED)
#define IL2CPP_STRUCT_CFRange__Boxed_DEFINED
struct CFRange__Class;
struct CFRange__Boxed {
    struct CFRange__Class* klass;
    MonitorData* monitor;
    struct CFRange fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFRange__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CFRange__Boxed_FWDDECL
#include <Modloader/app/structs/CFRange__Class.h>
#endif
#undef IL2CPP_STRUCT_CFRange__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFRange__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CFRange__Boxed_FWDDECL)
#include <Modloader/app/structs/CFRange__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFRange__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
