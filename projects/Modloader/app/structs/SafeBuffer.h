#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeBuffer_DEFINED)
#include <Modloader/app/structs/SafeBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_SafeBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeBuffer_DEFINED
struct SafeBuffer__Class;
struct SafeBuffer {
    struct SafeBuffer__Class* klass;
    MonitorData* monitor;
    struct SafeBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeBuffer_FWDDECL)
#define IL2CPP_STRUCT_SafeBuffer_FWDDECL
#include <Modloader/app/structs/SafeBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeBuffer_DEFINED) && !defined(IL2CPP_STRUCT_SafeBuffer_FWDDECL)
#include <Modloader/app/structs/SafeBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
