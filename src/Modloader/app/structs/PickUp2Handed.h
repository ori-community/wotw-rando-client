#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickUp2Handed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickUp2Handed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickUp2Handed_DEFINED)
#include <Modloader/app/structs/PickUp2Handed__Fields.h>
#if defined(IL2CPP_STRUCT_PickUp2Handed__Fields_DEFINED)
#define IL2CPP_STRUCT_PickUp2Handed_DEFINED
struct PickUp2Handed__Class;
struct PickUp2Handed {
    struct PickUp2Handed__Class* klass;
    MonitorData* monitor;
    struct PickUp2Handed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickUp2Handed_FWDDECL)
#define IL2CPP_STRUCT_PickUp2Handed_FWDDECL
#include <Modloader/app/structs/PickUp2Handed__Class.h>
#endif
#undef IL2CPP_STRUCT_PickUp2Handed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickUp2Handed_DEFINED) && !defined(IL2CPP_STRUCT_PickUp2Handed_FWDDECL)
#include <Modloader/app/structs/PickUp2Handed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickUp2Handed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
