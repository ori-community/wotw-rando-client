#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonConvert_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonConvert_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConvert_DEFINED)
#define IL2CPP_STRUCT_JsonConvert_DEFINED
struct JsonConvert__Class;
struct JsonConvert {
    struct JsonConvert__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonConvert_FWDDECL)
#define IL2CPP_STRUCT_JsonConvert_FWDDECL
#include <Modloader/app/structs/JsonConvert__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonConvert_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConvert_DEFINED) && !defined(IL2CPP_STRUCT_JsonConvert_FWDDECL)
#include <Modloader/app/structs/JsonConvert.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonConvert.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
