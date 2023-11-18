#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FSharpFunction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FSharpFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FSharpFunction_DEFINED)
#include <Modloader/app/structs/FSharpFunction__Fields.h>
#if defined(IL2CPP_STRUCT_FSharpFunction__Fields_DEFINED)
#define IL2CPP_STRUCT_FSharpFunction_DEFINED
struct FSharpFunction__Class;
struct FSharpFunction {
    struct FSharpFunction__Class* klass;
    MonitorData* monitor;
    struct FSharpFunction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FSharpFunction_FWDDECL)
#define IL2CPP_STRUCT_FSharpFunction_FWDDECL
#include <Modloader/app/structs/FSharpFunction__Class.h>
#endif
#undef IL2CPP_STRUCT_FSharpFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FSharpFunction_DEFINED) && !defined(IL2CPP_STRUCT_FSharpFunction_FWDDECL)
#include <Modloader/app/structs/FSharpFunction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FSharpFunction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
