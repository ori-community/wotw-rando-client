#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BufferOffsetSize2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BufferOffsetSize2_INITIALIZING
#if !defined(IL2CPP_STRUCT_BufferOffsetSize2_DEFINED)
#include <Modloader/app/structs/BufferOffsetSize2__Fields.h>
#if defined(IL2CPP_STRUCT_BufferOffsetSize2__Fields_DEFINED)
#define IL2CPP_STRUCT_BufferOffsetSize2_DEFINED
struct BufferOffsetSize2__Class;
struct BufferOffsetSize2 {
    struct BufferOffsetSize2__Class* klass;
    MonitorData* monitor;
    struct BufferOffsetSize2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BufferOffsetSize2_FWDDECL)
#define IL2CPP_STRUCT_BufferOffsetSize2_FWDDECL
#include <Modloader/app/structs/BufferOffsetSize2__Class.h>
#endif
#undef IL2CPP_STRUCT_BufferOffsetSize2_INITIALIZING
#if !defined(IL2CPP_STRUCT_BufferOffsetSize2_DEFINED) && !defined(IL2CPP_STRUCT_BufferOffsetSize2_FWDDECL)
#include <Modloader/app/structs/BufferOffsetSize2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BufferOffsetSize2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
