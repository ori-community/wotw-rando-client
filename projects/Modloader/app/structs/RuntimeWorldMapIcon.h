#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeWorldMapIcon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeWorldMapIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeWorldMapIcon_DEFINED)
#include <Modloader/app/structs/RuntimeWorldMapIcon__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeWorldMapIcon_DEFINED
struct RuntimeWorldMapIcon__Class;
struct RuntimeWorldMapIcon {
    struct RuntimeWorldMapIcon__Class* klass;
    MonitorData* monitor;
    struct RuntimeWorldMapIcon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeWorldMapIcon_FWDDECL)
#define IL2CPP_STRUCT_RuntimeWorldMapIcon_FWDDECL
#include <Modloader/app/structs/RuntimeWorldMapIcon__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeWorldMapIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeWorldMapIcon_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeWorldMapIcon_FWDDECL)
#include <Modloader/app/structs/RuntimeWorldMapIcon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeWorldMapIcon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
