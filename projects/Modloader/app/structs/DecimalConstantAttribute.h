#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecimalConstantAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecimalConstantAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecimalConstantAttribute_DEFINED)
#include <Modloader/app/structs/DecimalConstantAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DecimalConstantAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DecimalConstantAttribute_DEFINED
struct DecimalConstantAttribute__Class;
struct DecimalConstantAttribute {
    struct DecimalConstantAttribute__Class* klass;
    MonitorData* monitor;
    struct DecimalConstantAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecimalConstantAttribute_FWDDECL)
#define IL2CPP_STRUCT_DecimalConstantAttribute_FWDDECL
#include <Modloader/app/structs/DecimalConstantAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DecimalConstantAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecimalConstantAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DecimalConstantAttribute_FWDDECL)
#include <Modloader/app/structs/DecimalConstantAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecimalConstantAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
