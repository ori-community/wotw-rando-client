#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSSamplePositionMarker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSSamplePositionMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSSamplePositionMarker_DEFINED)
#include <Modloader/app/structs/FPSSamplePositionMarker__Fields.h>
#if defined(IL2CPP_STRUCT_FPSSamplePositionMarker__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSSamplePositionMarker_DEFINED
struct FPSSamplePositionMarker__Class;
struct FPSSamplePositionMarker {
    struct FPSSamplePositionMarker__Class* klass;
    MonitorData* monitor;
    struct FPSSamplePositionMarker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSSamplePositionMarker_FWDDECL)
#define IL2CPP_STRUCT_FPSSamplePositionMarker_FWDDECL
#include <Modloader/app/structs/FPSSamplePositionMarker__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSSamplePositionMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSSamplePositionMarker_DEFINED) && !defined(IL2CPP_STRUCT_FPSSamplePositionMarker_FWDDECL)
#include <Modloader/app/structs/FPSSamplePositionMarker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSSamplePositionMarker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
