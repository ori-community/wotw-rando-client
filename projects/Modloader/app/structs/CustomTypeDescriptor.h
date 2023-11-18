#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomTypeDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomTypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomTypeDescriptor_DEFINED)
#include <Modloader/app/structs/CustomTypeDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_CustomTypeDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomTypeDescriptor_DEFINED
struct CustomTypeDescriptor__Class;
struct CustomTypeDescriptor {
    struct CustomTypeDescriptor__Class* klass;
    MonitorData* monitor;
    struct CustomTypeDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomTypeDescriptor_FWDDECL)
#define IL2CPP_STRUCT_CustomTypeDescriptor_FWDDECL
#include <Modloader/app/structs/CustomTypeDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomTypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomTypeDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_CustomTypeDescriptor_FWDDECL)
#include <Modloader/app/structs/CustomTypeDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomTypeDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
