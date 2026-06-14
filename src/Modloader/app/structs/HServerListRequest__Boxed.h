#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HServerListRequest__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HServerListRequest__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HServerListRequest__Boxed_DEFINED)
#include <Modloader/app/structs/HServerListRequest.h>
#if defined(IL2CPP_STRUCT_HServerListRequest_DEFINED)
#define IL2CPP_STRUCT_HServerListRequest__Boxed_DEFINED
struct HServerListRequest__Class;
struct HServerListRequest__Boxed {
    struct HServerListRequest__Class* klass;
    MonitorData* monitor;
    struct HServerListRequest fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HServerListRequest__Boxed_FWDDECL)
#define IL2CPP_STRUCT_HServerListRequest__Boxed_FWDDECL
#include <Modloader/app/structs/HServerListRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_HServerListRequest__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HServerListRequest__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_HServerListRequest__Boxed_FWDDECL)
#include <Modloader/app/structs/HServerListRequest__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HServerListRequest__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
