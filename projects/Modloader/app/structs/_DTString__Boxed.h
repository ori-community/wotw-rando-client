#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__DTString__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__DTString__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT__DTString__Boxed_DEFINED)
#include <Modloader/app/structs/_DTString.h>
#if defined(IL2CPP_STRUCT__DTString_DEFINED)
#define IL2CPP_STRUCT__DTString__Boxed_DEFINED
struct _DTString__Class;
struct _DTString__Boxed {
    struct _DTString__Class* klass;
    MonitorData* monitor;
    struct _DTString fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT__DTString__Boxed_FWDDECL)
#define IL2CPP_STRUCT__DTString__Boxed_FWDDECL
#include <Modloader/app/structs/_DTString__Class.h>
#endif
#undef IL2CPP_STRUCT__DTString__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT__DTString__Boxed_DEFINED) && !defined(IL2CPP_STRUCT__DTString__Boxed_FWDDECL)
#include <Modloader/app/structs/_DTString__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_DTString__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
