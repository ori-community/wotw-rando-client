#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoAsyncCall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoAsyncCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAsyncCall_DEFINED)
#include <Modloader/app/structs/MonoAsyncCall__Fields.h>
#if defined(IL2CPP_STRUCT_MonoAsyncCall__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoAsyncCall_DEFINED
struct MonoAsyncCall__Class;
struct MonoAsyncCall {
    struct MonoAsyncCall__Class* klass;
    MonitorData* monitor;
    struct MonoAsyncCall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoAsyncCall_FWDDECL)
#define IL2CPP_STRUCT_MonoAsyncCall_FWDDECL
#include <Modloader/app/structs/MonoAsyncCall__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoAsyncCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAsyncCall_DEFINED) && !defined(IL2CPP_STRUCT_MonoAsyncCall_FWDDECL)
#include <Modloader/app/structs/MonoAsyncCall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoAsyncCall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
