#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisposableBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisposableBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisposableBuffer_DEFINED)
#include <Modloader/app/structs/DisposableBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_DisposableBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_DisposableBuffer_DEFINED
struct DisposableBuffer__Class;
struct DisposableBuffer {
    struct DisposableBuffer__Class* klass;
    MonitorData* monitor;
    struct DisposableBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisposableBuffer_FWDDECL)
#define IL2CPP_STRUCT_DisposableBuffer_FWDDECL
#include <Modloader/app/structs/DisposableBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_DisposableBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisposableBuffer_DEFINED) && !defined(IL2CPP_STRUCT_DisposableBuffer_FWDDECL)
#include <Modloader/app/structs/DisposableBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisposableBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
