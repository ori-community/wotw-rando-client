#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarshalAsAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarshalAsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalAsAttribute_DEFINED)
#include <Modloader/app/structs/MarshalAsAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_MarshalAsAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_MarshalAsAttribute_DEFINED
struct MarshalAsAttribute__Class;
struct MarshalAsAttribute {
    struct MarshalAsAttribute__Class* klass;
    MonitorData* monitor;
    struct MarshalAsAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MarshalAsAttribute_FWDDECL)
#define IL2CPP_STRUCT_MarshalAsAttribute_FWDDECL
#include <Modloader/app/structs/MarshalAsAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MarshalAsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalAsAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MarshalAsAttribute_FWDDECL)
#include <Modloader/app/structs/MarshalAsAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarshalAsAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
