#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotsUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsUI_DEFINED)
#include <Modloader/app/structs/SaveSlotsUI__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSlotsUI__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotsUI_DEFINED
struct SaveSlotsUI__Class;
struct SaveSlotsUI {
    struct SaveSlotsUI__Class* klass;
    MonitorData* monitor;
    struct SaveSlotsUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotsUI_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotsUI_FWDDECL
#include <Modloader/app/structs/SaveSlotsUI__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsUI_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotsUI_FWDDECL)
#include <Modloader/app/structs/SaveSlotsUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotsUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
