#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stream_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_Stream_DEFINED
struct Stream__Class;
struct Stream {
    struct Stream__Class* klass;
    MonitorData* monitor;
    struct Stream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stream_FWDDECL)
#define IL2CPP_STRUCT_Stream_FWDDECL
#include <Modloader/app/structs/Stream__Class.h>
#endif
#undef IL2CPP_STRUCT_Stream_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_DEFINED) && !defined(IL2CPP_STRUCT_Stream_FWDDECL)
#include <Modloader/app/structs/Stream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
