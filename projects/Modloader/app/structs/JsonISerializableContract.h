#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonISerializableContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonISerializableContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonISerializableContract_DEFINED)
#include <Modloader/app/structs/JsonISerializableContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonISerializableContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonISerializableContract_DEFINED
struct JsonISerializableContract__Class;
struct JsonISerializableContract {
    struct JsonISerializableContract__Class* klass;
    MonitorData* monitor;
    struct JsonISerializableContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonISerializableContract_FWDDECL)
#define IL2CPP_STRUCT_JsonISerializableContract_FWDDECL
#include <Modloader/app/structs/JsonISerializableContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonISerializableContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonISerializableContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonISerializableContract_FWDDECL)
#include <Modloader/app/structs/JsonISerializableContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonISerializableContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
