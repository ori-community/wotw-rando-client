#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UTF8StringPtr__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UTF8StringPtr__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF8StringPtr__Boxed_DEFINED)
#include <Modloader/app/structs/UTF8StringPtr.h>
#if defined(IL2CPP_STRUCT_UTF8StringPtr_DEFINED)
#define IL2CPP_STRUCT_UTF8StringPtr__Boxed_DEFINED
struct UTF8StringPtr__Class;
struct UTF8StringPtr__Boxed {
    struct UTF8StringPtr__Class* klass;
    MonitorData* monitor;
    struct UTF8StringPtr fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UTF8StringPtr__Boxed_FWDDECL)
#define IL2CPP_STRUCT_UTF8StringPtr__Boxed_FWDDECL
#include <Modloader/app/structs/UTF8StringPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_UTF8StringPtr__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF8StringPtr__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_UTF8StringPtr__Boxed_FWDDECL)
#include <Modloader/app/structs/UTF8StringPtr__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UTF8StringPtr__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
