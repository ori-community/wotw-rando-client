#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetToGameTime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetToGameTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetToGameTime_DEFINED)
#include <Modloader/app/structs/SetToGameTime__Fields.h>
#if defined(IL2CPP_STRUCT_SetToGameTime__Fields_DEFINED)
#define IL2CPP_STRUCT_SetToGameTime_DEFINED
struct SetToGameTime__Class;
struct SetToGameTime {
    struct SetToGameTime__Class* klass;
    MonitorData* monitor;
    struct SetToGameTime__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetToGameTime_FWDDECL)
#define IL2CPP_STRUCT_SetToGameTime_FWDDECL
#include <Modloader/app/structs/SetToGameTime__Class.h>
#endif
#undef IL2CPP_STRUCT_SetToGameTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetToGameTime_DEFINED) && !defined(IL2CPP_STRUCT_SetToGameTime_FWDDECL)
#include <Modloader/app/structs/SetToGameTime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetToGameTime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
