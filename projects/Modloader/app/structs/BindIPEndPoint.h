#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindIPEndPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindIPEndPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindIPEndPoint_DEFINED)
#include <Modloader/app/structs/BindIPEndPoint__Fields.h>
#if defined(IL2CPP_STRUCT_BindIPEndPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_BindIPEndPoint_DEFINED
struct BindIPEndPoint__Class;
struct BindIPEndPoint {
    struct BindIPEndPoint__Class* klass;
    MonitorData* monitor;
    struct BindIPEndPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BindIPEndPoint_FWDDECL)
#define IL2CPP_STRUCT_BindIPEndPoint_FWDDECL
#include <Modloader/app/structs/BindIPEndPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_BindIPEndPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindIPEndPoint_DEFINED) && !defined(IL2CPP_STRUCT_BindIPEndPoint_FWDDECL)
#include <Modloader/app/structs/BindIPEndPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindIPEndPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
