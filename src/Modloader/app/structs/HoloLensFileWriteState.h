#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HoloLensFileWriteState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HoloLensFileWriteState_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoloLensFileWriteState_DEFINED)
#include <Modloader/app/structs/HoloLensFileWriteState__Fields.h>
#if defined(IL2CPP_STRUCT_HoloLensFileWriteState__Fields_DEFINED)
#define IL2CPP_STRUCT_HoloLensFileWriteState_DEFINED
struct HoloLensFileWriteState__Class;
struct HoloLensFileWriteState {
    struct HoloLensFileWriteState__Class* klass;
    MonitorData* monitor;
    struct HoloLensFileWriteState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HoloLensFileWriteState_FWDDECL)
#define IL2CPP_STRUCT_HoloLensFileWriteState_FWDDECL
#include <Modloader/app/structs/HoloLensFileWriteState__Class.h>
#endif
#undef IL2CPP_STRUCT_HoloLensFileWriteState_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoloLensFileWriteState_DEFINED) && !defined(IL2CPP_STRUCT_HoloLensFileWriteState_FWDDECL)
#include <Modloader/app/structs/HoloLensFileWriteState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HoloLensFileWriteState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
