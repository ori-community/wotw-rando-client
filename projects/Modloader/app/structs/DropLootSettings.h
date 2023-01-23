#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropLootSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropLootSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropLootSettings_DEFINED)
#include <Modloader/app/structs/DropLootSettings__Fields.h>
#if defined(IL2CPP_STRUCT_DropLootSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DropLootSettings_DEFINED
struct DropLootSettings__Class;
struct DropLootSettings {
    struct DropLootSettings__Class* klass;
    MonitorData* monitor;
    struct DropLootSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropLootSettings_FWDDECL)
#define IL2CPP_STRUCT_DropLootSettings_FWDDECL
#include <Modloader/app/structs/DropLootSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_DropLootSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropLootSettings_DEFINED) && !defined(IL2CPP_STRUCT_DropLootSettings_FWDDECL)
#include <Modloader/app/structs/DropLootSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropLootSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
