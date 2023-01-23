#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaceOnGroundAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaceOnGroundAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaceOnGroundAction_DEFINED)
#include <Modloader/app/structs/PlaceOnGroundAction__Fields.h>
#if defined(IL2CPP_STRUCT_PlaceOnGroundAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaceOnGroundAction_DEFINED
struct PlaceOnGroundAction__Class;
struct PlaceOnGroundAction {
    struct PlaceOnGroundAction__Class* klass;
    MonitorData* monitor;
    struct PlaceOnGroundAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaceOnGroundAction_FWDDECL)
#define IL2CPP_STRUCT_PlaceOnGroundAction_FWDDECL
#include <Modloader/app/structs/PlaceOnGroundAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaceOnGroundAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaceOnGroundAction_DEFINED) && !defined(IL2CPP_STRUCT_PlaceOnGroundAction_FWDDECL)
#include <Modloader/app/structs/PlaceOnGroundAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaceOnGroundAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
