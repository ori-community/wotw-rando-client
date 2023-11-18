#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBuffer_DEFINED)
#include <Modloader/app/structs/SecurityBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityBuffer_DEFINED
struct SecurityBuffer__Class;
struct SecurityBuffer {
    struct SecurityBuffer__Class* klass;
    MonitorData* monitor;
    struct SecurityBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityBuffer_FWDDECL)
#define IL2CPP_STRUCT_SecurityBuffer_FWDDECL
#include <Modloader/app/structs/SecurityBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBuffer_DEFINED) && !defined(IL2CPP_STRUCT_SecurityBuffer_FWDDECL)
#include <Modloader/app/structs/SecurityBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
