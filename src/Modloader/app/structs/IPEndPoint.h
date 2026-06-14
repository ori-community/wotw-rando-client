#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPEndPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPEndPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPEndPoint_DEFINED)
#include <Modloader/app/structs/IPEndPoint__Fields.h>
#if defined(IL2CPP_STRUCT_IPEndPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_IPEndPoint_DEFINED
struct IPEndPoint__Class;
struct IPEndPoint {
    struct IPEndPoint__Class* klass;
    MonitorData* monitor;
    struct IPEndPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IPEndPoint_FWDDECL)
#define IL2CPP_STRUCT_IPEndPoint_FWDDECL
#include <Modloader/app/structs/IPEndPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_IPEndPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPEndPoint_DEFINED) && !defined(IL2CPP_STRUCT_IPEndPoint_FWDDECL)
#include <Modloader/app/structs/IPEndPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPEndPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
