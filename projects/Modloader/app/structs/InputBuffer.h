#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputBuffer_DEFINED)
#include <Modloader/app/structs/InputBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_InputBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_InputBuffer_DEFINED
struct InputBuffer__Class;
struct InputBuffer {
    struct InputBuffer__Class* klass;
    MonitorData* monitor;
    struct InputBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputBuffer_FWDDECL)
#define IL2CPP_STRUCT_InputBuffer_FWDDECL
#include <Modloader/app/structs/InputBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_InputBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputBuffer_DEFINED) && !defined(IL2CPP_STRUCT_InputBuffer_FWDDECL)
#include <Modloader/app/structs/InputBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
