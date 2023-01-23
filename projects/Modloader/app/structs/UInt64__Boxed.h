#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt64__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt64__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64__Boxed_DEFINED)
#define IL2CPP_STRUCT_UInt64__Boxed_DEFINED
struct UInt64__Class;
struct UInt64__Boxed {
    struct UInt64__Class* klass;
    MonitorData* monitor;
    uint64_t fields;
};
#endif
#if !defined(IL2CPP_STRUCT_UInt64__Boxed_FWDDECL)
#define IL2CPP_STRUCT_UInt64__Boxed_FWDDECL
#include <Modloader/app/structs/UInt64__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt64__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_UInt64__Boxed_FWDDECL)
#include <Modloader/app/structs/UInt64__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt64__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
