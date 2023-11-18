#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplicationScopedSettingAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplicationScopedSettingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationScopedSettingAttribute_DEFINED)
#define IL2CPP_STRUCT_ApplicationScopedSettingAttribute_DEFINED
struct ApplicationScopedSettingAttribute__Class;
struct ApplicationScopedSettingAttribute {
    struct ApplicationScopedSettingAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ApplicationScopedSettingAttribute_FWDDECL)
#define IL2CPP_STRUCT_ApplicationScopedSettingAttribute_FWDDECL
#include <Modloader/app/structs/ApplicationScopedSettingAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplicationScopedSettingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationScopedSettingAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ApplicationScopedSettingAttribute_FWDDECL)
#include <Modloader/app/structs/ApplicationScopedSettingAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplicationScopedSettingAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
