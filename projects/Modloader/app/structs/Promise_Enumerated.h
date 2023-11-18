#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Promise_Enumerated_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Promise_Enumerated_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_Enumerated_DEFINED)
#include <Modloader/app/structs/Promise_Enumerated__Fields.h>
#if defined(IL2CPP_STRUCT_Promise_Enumerated__Fields_DEFINED)
#define IL2CPP_STRUCT_Promise_Enumerated_DEFINED
struct Promise_Enumerated__Class;
struct Promise_Enumerated {
    struct Promise_Enumerated__Class* klass;
    MonitorData* monitor;
    struct Promise_Enumerated__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Promise_Enumerated_FWDDECL)
#define IL2CPP_STRUCT_Promise_Enumerated_FWDDECL
#include <Modloader/app/structs/Promise_Enumerated__Class.h>
#endif
#undef IL2CPP_STRUCT_Promise_Enumerated_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_Enumerated_DEFINED) && !defined(IL2CPP_STRUCT_Promise_Enumerated_FWDDECL)
#include <Modloader/app/structs/Promise_Enumerated.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Promise_Enumerated.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
