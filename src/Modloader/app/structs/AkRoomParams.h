#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkRoomParams_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkRoomParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkRoomParams_DEFINED)
#include <Modloader/app/structs/AkRoomParams__Fields.h>
#if defined(IL2CPP_STRUCT_AkRoomParams__Fields_DEFINED)
#define IL2CPP_STRUCT_AkRoomParams_DEFINED
struct AkRoomParams__Class;
struct AkRoomParams {
    struct AkRoomParams__Class* klass;
    MonitorData* monitor;
    struct AkRoomParams__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkRoomParams_FWDDECL)
#define IL2CPP_STRUCT_AkRoomParams_FWDDECL
#include <Modloader/app/structs/AkRoomParams__Class.h>
#endif
#undef IL2CPP_STRUCT_AkRoomParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkRoomParams_DEFINED) && !defined(IL2CPP_STRUCT_AkRoomParams_FWDDECL)
#include <Modloader/app/structs/AkRoomParams.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkRoomParams.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
