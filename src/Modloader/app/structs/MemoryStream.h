#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryStream_DEFINED)
#include <Modloader/app/structs/MemoryStream__Fields.h>
#if defined(IL2CPP_STRUCT_MemoryStream__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryStream_DEFINED
struct MemoryStream__Class;
struct MemoryStream {
    struct MemoryStream__Class* klass;
    MonitorData* monitor;
    struct MemoryStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryStream_FWDDECL)
#define IL2CPP_STRUCT_MemoryStream_FWDDECL
#include <Modloader/app/structs/MemoryStream__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryStream_DEFINED) && !defined(IL2CPP_STRUCT_MemoryStream_FWDDECL)
#include <Modloader/app/structs/MemoryStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
