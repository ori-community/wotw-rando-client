#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerInternalBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerInternalBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalBase_DEFINED)
#include <Modloader/app/structs/JsonSerializerInternalBase__Fields.h>
#if defined(IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializerInternalBase_DEFINED
struct JsonSerializerInternalBase__Class;
struct JsonSerializerInternalBase {
    struct JsonSerializerInternalBase__Class* klass;
    MonitorData* monitor;
    struct JsonSerializerInternalBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalBase_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerInternalBase_FWDDECL
#include <Modloader/app/structs/JsonSerializerInternalBase__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerInternalBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalBase_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerInternalBase_FWDDECL)
#include <Modloader/app/structs/JsonSerializerInternalBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerInternalBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
