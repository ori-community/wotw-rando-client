#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonStringContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonStringContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonStringContract_DEFINED)
#include <Modloader/app/structs/JsonStringContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonStringContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonStringContract_DEFINED
struct JsonStringContract__Class;
struct JsonStringContract {
    struct JsonStringContract__Class* klass;
    MonitorData* monitor;
    struct JsonStringContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonStringContract_FWDDECL)
#define IL2CPP_STRUCT_JsonStringContract_FWDDECL
#include <Modloader/app/structs/JsonStringContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonStringContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonStringContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonStringContract_FWDDECL)
#include <Modloader/app/structs/JsonStringContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonStringContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
