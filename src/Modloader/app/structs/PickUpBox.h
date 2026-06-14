#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickUpBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickUpBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickUpBox_DEFINED)
#include <Modloader/app/structs/PickUpBox__Fields.h>
#if defined(IL2CPP_STRUCT_PickUpBox__Fields_DEFINED)
#define IL2CPP_STRUCT_PickUpBox_DEFINED
struct PickUpBox__Class;
struct PickUpBox {
    struct PickUpBox__Class* klass;
    MonitorData* monitor;
    struct PickUpBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickUpBox_FWDDECL)
#define IL2CPP_STRUCT_PickUpBox_FWDDECL
#include <Modloader/app/structs/PickUpBox__Class.h>
#endif
#undef IL2CPP_STRUCT_PickUpBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickUpBox_DEFINED) && !defined(IL2CPP_STRUCT_PickUpBox_FWDDECL)
#include <Modloader/app/structs/PickUpBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickUpBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
