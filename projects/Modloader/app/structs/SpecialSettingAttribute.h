#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpecialSettingAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpecialSettingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpecialSettingAttribute_DEFINED)
#define IL2CPP_STRUCT_SpecialSettingAttribute_DEFINED
struct SpecialSettingAttribute__Class;
struct SpecialSettingAttribute {
    struct SpecialSettingAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SpecialSettingAttribute_FWDDECL)
#define IL2CPP_STRUCT_SpecialSettingAttribute_FWDDECL
#include <Modloader/app/structs/SpecialSettingAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SpecialSettingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpecialSettingAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SpecialSettingAttribute_FWDDECL)
#include <Modloader/app/structs/SpecialSettingAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpecialSettingAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
