#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZerofyWorldPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZerofyWorldPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZerofyWorldPosition_DEFINED)
#include <Modloader/app/structs/ZerofyWorldPosition__Fields.h>
#if defined(IL2CPP_STRUCT_ZerofyWorldPosition__Fields_DEFINED)
#define IL2CPP_STRUCT_ZerofyWorldPosition_DEFINED
struct ZerofyWorldPosition__Class;
struct ZerofyWorldPosition {
    struct ZerofyWorldPosition__Class* klass;
    MonitorData* monitor;
    struct ZerofyWorldPosition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZerofyWorldPosition_FWDDECL)
#define IL2CPP_STRUCT_ZerofyWorldPosition_FWDDECL
#include <Modloader/app/structs/ZerofyWorldPosition__Class.h>
#endif
#undef IL2CPP_STRUCT_ZerofyWorldPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZerofyWorldPosition_DEFINED) && !defined(IL2CPP_STRUCT_ZerofyWorldPosition_FWDDECL)
#include <Modloader/app/structs/ZerofyWorldPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZerofyWorldPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
