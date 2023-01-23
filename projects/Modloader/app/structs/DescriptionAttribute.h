#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DescriptionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DescriptionAttribute_DEFINED)
#include <Modloader/app/structs/DescriptionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DescriptionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DescriptionAttribute_DEFINED
struct DescriptionAttribute__Class;
struct DescriptionAttribute {
    struct DescriptionAttribute__Class* klass;
    MonitorData* monitor;
    struct DescriptionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DescriptionAttribute_FWDDECL)
#define IL2CPP_STRUCT_DescriptionAttribute_FWDDECL
#include <Modloader/app/structs/DescriptionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DescriptionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DescriptionAttribute_FWDDECL)
#include <Modloader/app/structs/DescriptionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DescriptionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
