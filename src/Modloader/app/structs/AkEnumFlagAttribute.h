#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkEnumFlagAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkEnumFlagAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkEnumFlagAttribute_DEFINED)
#include <Modloader/app/structs/AkEnumFlagAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AkEnumFlagAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AkEnumFlagAttribute_DEFINED
struct AkEnumFlagAttribute__Class;
struct AkEnumFlagAttribute {
    struct AkEnumFlagAttribute__Class* klass;
    MonitorData* monitor;
    struct AkEnumFlagAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkEnumFlagAttribute_FWDDECL)
#define IL2CPP_STRUCT_AkEnumFlagAttribute_FWDDECL
#include <Modloader/app/structs/AkEnumFlagAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AkEnumFlagAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkEnumFlagAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AkEnumFlagAttribute_FWDDECL)
#include <Modloader/app/structs/AkEnumFlagAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkEnumFlagAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
