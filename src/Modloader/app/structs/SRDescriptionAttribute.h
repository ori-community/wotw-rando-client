#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SRDescriptionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SRDescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SRDescriptionAttribute_DEFINED)
#include <Modloader/app/structs/SRDescriptionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SRDescriptionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SRDescriptionAttribute_DEFINED
struct SRDescriptionAttribute__Class;
struct SRDescriptionAttribute {
    struct SRDescriptionAttribute__Class* klass;
    MonitorData* monitor;
    struct SRDescriptionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SRDescriptionAttribute_FWDDECL)
#define IL2CPP_STRUCT_SRDescriptionAttribute_FWDDECL
#include <Modloader/app/structs/SRDescriptionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SRDescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SRDescriptionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SRDescriptionAttribute_FWDDECL)
#include <Modloader/app/structs/SRDescriptionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SRDescriptionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
