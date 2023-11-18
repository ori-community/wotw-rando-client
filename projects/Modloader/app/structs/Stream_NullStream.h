#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stream_NullStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stream_NullStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_NullStream_DEFINED)
#include <Modloader/app/structs/Stream_NullStream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream_NullStream__Fields_DEFINED)
#define IL2CPP_STRUCT_Stream_NullStream_DEFINED
struct Stream_NullStream__Class;
struct Stream_NullStream {
    struct Stream_NullStream__Class* klass;
    MonitorData* monitor;
    struct Stream_NullStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stream_NullStream_FWDDECL)
#define IL2CPP_STRUCT_Stream_NullStream_FWDDECL
#include <Modloader/app/structs/Stream_NullStream__Class.h>
#endif
#undef IL2CPP_STRUCT_Stream_NullStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_NullStream_DEFINED) && !defined(IL2CPP_STRUCT_Stream_NullStream_FWDDECL)
#include <Modloader/app/structs/Stream_NullStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stream_NullStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
