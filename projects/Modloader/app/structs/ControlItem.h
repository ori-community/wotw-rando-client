#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlItem_DEFINED)
#include <Modloader/app/structs/ControlItem__Fields.h>
#if defined(IL2CPP_STRUCT_ControlItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlItem_DEFINED
struct ControlItem__Class;
struct ControlItem {
    struct ControlItem__Class* klass;
    MonitorData* monitor;
    struct ControlItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlItem_FWDDECL)
#define IL2CPP_STRUCT_ControlItem_FWDDECL
#include <Modloader/app/structs/ControlItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ControlItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlItem_DEFINED) && !defined(IL2CPP_STRUCT_ControlItem_FWDDECL)
#include <Modloader/app/structs/ControlItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
