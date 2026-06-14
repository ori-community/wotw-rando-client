#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticAccessorAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticAccessorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticAccessorAttribute_DEFINED)
#include <Modloader/app/structs/StaticAccessorAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_StaticAccessorAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticAccessorAttribute_DEFINED
struct StaticAccessorAttribute__Class;
struct StaticAccessorAttribute {
    struct StaticAccessorAttribute__Class* klass;
    MonitorData* monitor;
    struct StaticAccessorAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticAccessorAttribute_FWDDECL)
#define IL2CPP_STRUCT_StaticAccessorAttribute_FWDDECL
#include <Modloader/app/structs/StaticAccessorAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_StaticAccessorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticAccessorAttribute_DEFINED) && !defined(IL2CPP_STRUCT_StaticAccessorAttribute_FWDDECL)
#include <Modloader/app/structs/StaticAccessorAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticAccessorAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
