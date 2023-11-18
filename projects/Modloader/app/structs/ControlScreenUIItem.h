#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlScreenUIItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlScreenUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlScreenUIItem_DEFINED)
#include <Modloader/app/structs/ControlScreenUIItem__Fields.h>
#if defined(IL2CPP_STRUCT_ControlScreenUIItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlScreenUIItem_DEFINED
struct ControlScreenUIItem__Class;
struct ControlScreenUIItem {
    struct ControlScreenUIItem__Class* klass;
    MonitorData* monitor;
    struct ControlScreenUIItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlScreenUIItem_FWDDECL)
#define IL2CPP_STRUCT_ControlScreenUIItem_FWDDECL
#include <Modloader/app/structs/ControlScreenUIItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ControlScreenUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlScreenUIItem_DEFINED) && !defined(IL2CPP_STRUCT_ControlScreenUIItem_FWDDECL)
#include <Modloader/app/structs/ControlScreenUIItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlScreenUIItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
