#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultSettingValueAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultSettingValueAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultSettingValueAttribute_DEFINED)
#define IL2CPP_STRUCT_DefaultSettingValueAttribute_DEFINED
struct DefaultSettingValueAttribute__Class;
struct DefaultSettingValueAttribute {
    struct DefaultSettingValueAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultSettingValueAttribute_FWDDECL)
#define IL2CPP_STRUCT_DefaultSettingValueAttribute_FWDDECL
#include <Modloader/app/structs/DefaultSettingValueAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultSettingValueAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultSettingValueAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DefaultSettingValueAttribute_FWDDECL)
#include <Modloader/app/structs/DefaultSettingValueAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultSettingValueAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
