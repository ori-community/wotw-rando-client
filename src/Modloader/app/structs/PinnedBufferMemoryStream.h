#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PinnedBufferMemoryStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PinnedBufferMemoryStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_PinnedBufferMemoryStream_DEFINED)
#include <Modloader/app/structs/PinnedBufferMemoryStream__Fields.h>
#if defined(IL2CPP_STRUCT_PinnedBufferMemoryStream__Fields_DEFINED)
#define IL2CPP_STRUCT_PinnedBufferMemoryStream_DEFINED
struct PinnedBufferMemoryStream__Class;
struct PinnedBufferMemoryStream {
    struct PinnedBufferMemoryStream__Class* klass;
    MonitorData* monitor;
    struct PinnedBufferMemoryStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PinnedBufferMemoryStream_FWDDECL)
#define IL2CPP_STRUCT_PinnedBufferMemoryStream_FWDDECL
#include <Modloader/app/structs/PinnedBufferMemoryStream__Class.h>
#endif
#undef IL2CPP_STRUCT_PinnedBufferMemoryStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_PinnedBufferMemoryStream_DEFINED) && !defined(IL2CPP_STRUCT_PinnedBufferMemoryStream_FWDDECL)
#include <Modloader/app/structs/PinnedBufferMemoryStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PinnedBufferMemoryStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
