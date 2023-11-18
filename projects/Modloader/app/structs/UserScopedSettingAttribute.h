#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserScopedSettingAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserScopedSettingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserScopedSettingAttribute_DEFINED)
#define IL2CPP_STRUCT_UserScopedSettingAttribute_DEFINED
struct UserScopedSettingAttribute__Class;
struct UserScopedSettingAttribute {
    struct UserScopedSettingAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UserScopedSettingAttribute_FWDDECL)
#define IL2CPP_STRUCT_UserScopedSettingAttribute_FWDDECL
#include <Modloader/app/structs/UserScopedSettingAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_UserScopedSettingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserScopedSettingAttribute_DEFINED) && !defined(IL2CPP_STRUCT_UserScopedSettingAttribute_FWDDECL)
#include <Modloader/app/structs/UserScopedSettingAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserScopedSettingAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
