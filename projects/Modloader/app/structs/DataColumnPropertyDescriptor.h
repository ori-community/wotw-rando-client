#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataColumnPropertyDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataColumnPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnPropertyDescriptor_DEFINED)
#include <Modloader/app/structs/DataColumnPropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_DataColumnPropertyDescriptor_DEFINED
struct DataColumnPropertyDescriptor__Class;
struct DataColumnPropertyDescriptor {
    struct DataColumnPropertyDescriptor__Class* klass;
    MonitorData* monitor;
    struct DataColumnPropertyDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataColumnPropertyDescriptor_FWDDECL)
#define IL2CPP_STRUCT_DataColumnPropertyDescriptor_FWDDECL
#include <Modloader/app/structs/DataColumnPropertyDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_DataColumnPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnPropertyDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_DataColumnPropertyDescriptor_FWDDECL)
#include <Modloader/app/structs/DataColumnPropertyDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataColumnPropertyDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
