#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonLinqContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonLinqContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonLinqContract_DEFINED)
#include <Modloader/app/structs/JsonLinqContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonLinqContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonLinqContract_DEFINED
struct JsonLinqContract__Class;
struct JsonLinqContract {
    struct JsonLinqContract__Class* klass;
    MonitorData* monitor;
    struct JsonLinqContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonLinqContract_FWDDECL)
#define IL2CPP_STRUCT_JsonLinqContract_FWDDECL
#include <Modloader/app/structs/JsonLinqContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonLinqContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonLinqContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonLinqContract_FWDDECL)
#include <Modloader/app/structs/JsonLinqContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonLinqContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
