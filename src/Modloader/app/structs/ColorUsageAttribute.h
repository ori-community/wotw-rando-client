#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorUsageAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorUsageAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorUsageAttribute_DEFINED)
#include <Modloader/app/structs/ColorUsageAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ColorUsageAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorUsageAttribute_DEFINED
struct ColorUsageAttribute__Class;
struct ColorUsageAttribute {
    struct ColorUsageAttribute__Class* klass;
    MonitorData* monitor;
    struct ColorUsageAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorUsageAttribute_FWDDECL)
#define IL2CPP_STRUCT_ColorUsageAttribute_FWDDECL
#include <Modloader/app/structs/ColorUsageAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorUsageAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorUsageAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ColorUsageAttribute_FWDDECL)
#include <Modloader/app/structs/ColorUsageAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorUsageAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
