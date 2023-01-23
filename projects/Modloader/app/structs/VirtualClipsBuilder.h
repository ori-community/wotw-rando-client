#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VirtualClipsBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VirtualClipsBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualClipsBuilder_DEFINED)
#include <Modloader/app/structs/VirtualClipsBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_VirtualClipsBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_VirtualClipsBuilder_DEFINED
struct VirtualClipsBuilder__Class;
struct VirtualClipsBuilder {
    struct VirtualClipsBuilder__Class* klass;
    MonitorData* monitor;
    struct VirtualClipsBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VirtualClipsBuilder_FWDDECL)
#define IL2CPP_STRUCT_VirtualClipsBuilder_FWDDECL
#include <Modloader/app/structs/VirtualClipsBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_VirtualClipsBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualClipsBuilder_DEFINED) && !defined(IL2CPP_STRUCT_VirtualClipsBuilder_FWDDECL)
#include <Modloader/app/structs/VirtualClipsBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VirtualClipsBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
