#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoCustomAttrs__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoCustomAttrs__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MonoCustomAttrs__StaticFields_DEFINED
struct Assembly;
struct Dictionary_2_System_Type_System_AttributeUsageAttribute_;
struct AttributeUsageAttribute;
struct MonoCustomAttrs__StaticFields {
    struct Assembly* corlib;
    struct Dictionary_2_System_Type_System_AttributeUsageAttribute_* usage_cache;
    struct AttributeUsageAttribute* DefaultAttributeUsage;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MonoCustomAttrs__StaticFields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/AttributeUsageAttribute.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_AttributeUsageAttribute_.h>
#endif
#undef IL2CPP_STRUCT_MonoCustomAttrs__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MonoCustomAttrs__StaticFields_FWDDECL)
#include <Modloader/app/structs/MonoCustomAttrs__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoCustomAttrs__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
