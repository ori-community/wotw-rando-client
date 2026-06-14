#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalHttpHeader__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalHttpHeader__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalHttpHeader__Boxed_DEFINED)
#include <Modloader/app/structs/XalHttpHeader.h>
#if defined(IL2CPP_STRUCT_XalHttpHeader_DEFINED)
#define IL2CPP_STRUCT_XalHttpHeader__Boxed_DEFINED
struct XalHttpHeader__Class;
struct XalHttpHeader__Boxed {
    struct XalHttpHeader__Class* klass;
    MonitorData* monitor;
    struct XalHttpHeader fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalHttpHeader__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XalHttpHeader__Boxed_FWDDECL
#include <Modloader/app/structs/XalHttpHeader__Class.h>
#endif
#undef IL2CPP_STRUCT_XalHttpHeader__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalHttpHeader__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XalHttpHeader__Boxed_FWDDECL)
#include <Modloader/app/structs/XalHttpHeader__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalHttpHeader__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
