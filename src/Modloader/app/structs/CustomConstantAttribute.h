#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomConstantAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomConstantAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomConstantAttribute_DEFINED)
#define IL2CPP_STRUCT_CustomConstantAttribute_DEFINED
struct CustomConstantAttribute__Class;
struct CustomConstantAttribute {
    struct CustomConstantAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CustomConstantAttribute_FWDDECL)
#define IL2CPP_STRUCT_CustomConstantAttribute_FWDDECL
#include <Modloader/app/structs/CustomConstantAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomConstantAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomConstantAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CustomConstantAttribute_FWDDECL)
#include <Modloader/app/structs/CustomConstantAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomConstantAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
