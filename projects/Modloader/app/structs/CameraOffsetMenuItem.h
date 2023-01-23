#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraOffsetMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraOffsetMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetMenuItem_DEFINED)
#include <Modloader/app/structs/CameraOffsetMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_CameraOffsetMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraOffsetMenuItem_DEFINED
struct CameraOffsetMenuItem__Class;
struct CameraOffsetMenuItem {
    struct CameraOffsetMenuItem__Class* klass;
    MonitorData* monitor;
    struct CameraOffsetMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraOffsetMenuItem_FWDDECL)
#define IL2CPP_STRUCT_CameraOffsetMenuItem_FWDDECL
#include <Modloader/app/structs/CameraOffsetMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraOffsetMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_CameraOffsetMenuItem_FWDDECL)
#include <Modloader/app/structs/CameraOffsetMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraOffsetMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
