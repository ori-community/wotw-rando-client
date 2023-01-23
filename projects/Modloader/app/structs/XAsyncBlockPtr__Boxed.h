#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAsyncBlockPtr__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAsyncBlockPtr__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAsyncBlockPtr__Boxed_DEFINED)
#include <Modloader/app/structs/XAsyncBlockPtr.h>
#if defined(IL2CPP_STRUCT_XAsyncBlockPtr_DEFINED)
#define IL2CPP_STRUCT_XAsyncBlockPtr__Boxed_DEFINED
struct XAsyncBlockPtr__Class;
struct XAsyncBlockPtr__Boxed {
    struct XAsyncBlockPtr__Class* klass;
    MonitorData* monitor;
    struct XAsyncBlockPtr fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XAsyncBlockPtr__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XAsyncBlockPtr__Boxed_FWDDECL
#include <Modloader/app/structs/XAsyncBlockPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_XAsyncBlockPtr__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAsyncBlockPtr__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XAsyncBlockPtr__Boxed_FWDDECL)
#include <Modloader/app/structs/XAsyncBlockPtr__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAsyncBlockPtr__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
