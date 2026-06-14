#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FreeCameraMove_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FreeCameraMove_INITIALIZING
#if !defined(IL2CPP_STRUCT_FreeCameraMove_DEFINED)
#include <Modloader/app/structs/FreeCameraMove__Fields.h>
#if defined(IL2CPP_STRUCT_FreeCameraMove__Fields_DEFINED)
#define IL2CPP_STRUCT_FreeCameraMove_DEFINED
struct FreeCameraMove__Class;
struct FreeCameraMove {
    struct FreeCameraMove__Class* klass;
    MonitorData* monitor;
    struct FreeCameraMove__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FreeCameraMove_FWDDECL)
#define IL2CPP_STRUCT_FreeCameraMove_FWDDECL
#include <Modloader/app/structs/FreeCameraMove__Class.h>
#endif
#undef IL2CPP_STRUCT_FreeCameraMove_INITIALIZING
#if !defined(IL2CPP_STRUCT_FreeCameraMove_DEFINED) && !defined(IL2CPP_STRUCT_FreeCameraMove_FWDDECL)
#include <Modloader/app/structs/FreeCameraMove.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FreeCameraMove.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
