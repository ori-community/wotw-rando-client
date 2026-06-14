#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MediaTypeHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MediaTypeHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_MediaTypeHeaderValue_DEFINED)
#include <Modloader/app/structs/MediaTypeHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_MediaTypeHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_MediaTypeHeaderValue_DEFINED
struct MediaTypeHeaderValue__Class;
struct MediaTypeHeaderValue {
    struct MediaTypeHeaderValue__Class* klass;
    MonitorData* monitor;
    struct MediaTypeHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MediaTypeHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_MediaTypeHeaderValue_FWDDECL
#include <Modloader/app/structs/MediaTypeHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_MediaTypeHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_MediaTypeHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_MediaTypeHeaderValue_FWDDECL)
#include <Modloader/app/structs/MediaTypeHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MediaTypeHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
