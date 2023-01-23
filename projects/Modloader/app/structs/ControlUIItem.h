#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlUIItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlUIItem_DEFINED)
#include <Modloader/app/structs/ControlUIItem__Fields.h>
#if defined(IL2CPP_STRUCT_ControlUIItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlUIItem_DEFINED
struct ControlUIItem__Class;
struct ControlUIItem {
    struct ControlUIItem__Class* klass;
    MonitorData* monitor;
    struct ControlUIItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlUIItem_FWDDECL)
#define IL2CPP_STRUCT_ControlUIItem_FWDDECL
#include <Modloader/app/structs/ControlUIItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ControlUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlUIItem_DEFINED) && !defined(IL2CPP_STRUCT_ControlUIItem_FWDDECL)
#include <Modloader/app/structs/ControlUIItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlUIItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
