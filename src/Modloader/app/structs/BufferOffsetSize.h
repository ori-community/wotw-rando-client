#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BufferOffsetSize_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BufferOffsetSize_INITIALIZING
#if !defined(IL2CPP_STRUCT_BufferOffsetSize_DEFINED)
#include <Modloader/app/structs/BufferOffsetSize__Fields.h>
#if defined(IL2CPP_STRUCT_BufferOffsetSize__Fields_DEFINED)
#define IL2CPP_STRUCT_BufferOffsetSize_DEFINED
struct BufferOffsetSize__Class;
struct BufferOffsetSize {
    struct BufferOffsetSize__Class* klass;
    MonitorData* monitor;
    struct BufferOffsetSize__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BufferOffsetSize_FWDDECL)
#define IL2CPP_STRUCT_BufferOffsetSize_FWDDECL
#include <Modloader/app/structs/BufferOffsetSize__Class.h>
#endif
#undef IL2CPP_STRUCT_BufferOffsetSize_INITIALIZING
#if !defined(IL2CPP_STRUCT_BufferOffsetSize_DEFINED) && !defined(IL2CPP_STRUCT_BufferOffsetSize_FWDDECL)
#include <Modloader/app/structs/BufferOffsetSize.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BufferOffsetSize.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
