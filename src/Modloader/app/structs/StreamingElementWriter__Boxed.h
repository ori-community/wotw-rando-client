#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamingElementWriter__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamingElementWriter__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingElementWriter__Boxed_DEFINED)
#include <Modloader/app/structs/StreamingElementWriter.h>
#if defined(IL2CPP_STRUCT_StreamingElementWriter_DEFINED)
#define IL2CPP_STRUCT_StreamingElementWriter__Boxed_DEFINED
struct StreamingElementWriter__Class;
struct StreamingElementWriter__Boxed {
    struct StreamingElementWriter__Class* klass;
    MonitorData* monitor;
    struct StreamingElementWriter fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StreamingElementWriter__Boxed_FWDDECL)
#define IL2CPP_STRUCT_StreamingElementWriter__Boxed_FWDDECL
#include <Modloader/app/structs/StreamingElementWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_StreamingElementWriter__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingElementWriter__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_StreamingElementWriter__Boxed_FWDDECL)
#include <Modloader/app/structs/StreamingElementWriter__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamingElementWriter__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
