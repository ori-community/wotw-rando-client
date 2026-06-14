#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RefreshPropertiesAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RefreshPropertiesAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefreshPropertiesAttribute_DEFINED)
#include <Modloader/app/structs/RefreshPropertiesAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_RefreshPropertiesAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_RefreshPropertiesAttribute_DEFINED
struct RefreshPropertiesAttribute__Class;
struct RefreshPropertiesAttribute {
    struct RefreshPropertiesAttribute__Class* klass;
    MonitorData* monitor;
    struct RefreshPropertiesAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RefreshPropertiesAttribute_FWDDECL)
#define IL2CPP_STRUCT_RefreshPropertiesAttribute_FWDDECL
#include <Modloader/app/structs/RefreshPropertiesAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_RefreshPropertiesAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefreshPropertiesAttribute_DEFINED) && !defined(IL2CPP_STRUCT_RefreshPropertiesAttribute_FWDDECL)
#include <Modloader/app/structs/RefreshPropertiesAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RefreshPropertiesAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
