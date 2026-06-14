#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatSettingStrings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatSettingStrings_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSettingStrings_DEFINED)
#include <Modloader/app/structs/StatSettingStrings__Fields.h>
#if defined(IL2CPP_STRUCT_StatSettingStrings__Fields_DEFINED)
#define IL2CPP_STRUCT_StatSettingStrings_DEFINED
struct StatSettingStrings__Class;
struct StatSettingStrings {
    struct StatSettingStrings__Class* klass;
    MonitorData* monitor;
    struct StatSettingStrings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatSettingStrings_FWDDECL)
#define IL2CPP_STRUCT_StatSettingStrings_FWDDECL
#include <Modloader/app/structs/StatSettingStrings__Class.h>
#endif
#undef IL2CPP_STRUCT_StatSettingStrings_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSettingStrings_DEFINED) && !defined(IL2CPP_STRUCT_StatSettingStrings_FWDDECL)
#include <Modloader/app/structs/StatSettingStrings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatSettingStrings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
