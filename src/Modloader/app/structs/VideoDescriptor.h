#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoDescriptor_DEFINED)
#include <Modloader/app/structs/VideoDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_VideoDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoDescriptor_DEFINED
struct VideoDescriptor__Class;
struct VideoDescriptor {
    struct VideoDescriptor__Class* klass;
    MonitorData* monitor;
    struct VideoDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoDescriptor_FWDDECL)
#define IL2CPP_STRUCT_VideoDescriptor_FWDDECL
#include <Modloader/app/structs/VideoDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_VideoDescriptor_FWDDECL)
#include <Modloader/app/structs/VideoDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
