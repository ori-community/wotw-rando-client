#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataMemberAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataMemberAttribute_DEFINED)
#include <Modloader/app/structs/DataMemberAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DataMemberAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DataMemberAttribute_DEFINED
struct DataMemberAttribute__Class;
struct DataMemberAttribute {
    struct DataMemberAttribute__Class* klass;
    MonitorData* monitor;
    struct DataMemberAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataMemberAttribute_FWDDECL)
#define IL2CPP_STRUCT_DataMemberAttribute_FWDDECL
#include <Modloader/app/structs/DataMemberAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DataMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataMemberAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DataMemberAttribute_FWDDECL)
#include <Modloader/app/structs/DataMemberAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataMemberAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
