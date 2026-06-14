#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeUsageAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeUsageAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeUsageAttribute_DEFINED)
#include <Modloader/app/structs/AttributeUsageAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AttributeUsageAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AttributeUsageAttribute_DEFINED
struct AttributeUsageAttribute__Class;
struct AttributeUsageAttribute {
    struct AttributeUsageAttribute__Class* klass;
    MonitorData* monitor;
    struct AttributeUsageAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttributeUsageAttribute_FWDDECL)
#define IL2CPP_STRUCT_AttributeUsageAttribute_FWDDECL
#include <Modloader/app/structs/AttributeUsageAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AttributeUsageAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeUsageAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AttributeUsageAttribute_FWDDECL)
#include <Modloader/app/structs/AttributeUsageAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeUsageAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
