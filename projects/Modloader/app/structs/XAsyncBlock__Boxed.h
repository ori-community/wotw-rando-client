#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAsyncBlock__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAsyncBlock__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAsyncBlock__Boxed_DEFINED)
#include <Modloader/app/structs/XAsyncBlock.h>
#if defined(IL2CPP_STRUCT_XAsyncBlock_DEFINED)
#define IL2CPP_STRUCT_XAsyncBlock__Boxed_DEFINED
struct XAsyncBlock__Class;
struct XAsyncBlock__Boxed {
    struct XAsyncBlock__Class* klass;
    MonitorData* monitor;
    struct XAsyncBlock fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XAsyncBlock__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XAsyncBlock__Boxed_FWDDECL
#include <Modloader/app/structs/XAsyncBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_XAsyncBlock__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAsyncBlock__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XAsyncBlock__Boxed_FWDDECL)
#include <Modloader/app/structs/XAsyncBlock__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAsyncBlock__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
