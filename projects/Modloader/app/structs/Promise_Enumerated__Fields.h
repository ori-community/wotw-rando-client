#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Promise_Enumerated__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Promise_Enumerated__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_Enumerated__Fields_DEFINED)
#define IL2CPP_STRUCT_Promise_Enumerated__Fields_DEFINED
struct Promise;
struct __declspec(align(8)) Promise_Enumerated__Fields {
    struct Promise* promise;
    bool abortOnFail;
};
#endif
#if !defined(IL2CPP_STRUCT_Promise_Enumerated__Fields_FWDDECL)
#define IL2CPP_STRUCT_Promise_Enumerated__Fields_FWDDECL
#include <Modloader/app/structs/Promise.h>
#endif
#undef IL2CPP_STRUCT_Promise_Enumerated__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_Enumerated__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Promise_Enumerated__Fields_FWDDECL)
#include <Modloader/app/structs/Promise_Enumerated__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Promise_Enumerated__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
