#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FSharpUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FSharpUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_FSharpUtils_DEFINED)
#define IL2CPP_STRUCT_FSharpUtils_DEFINED
struct FSharpUtils__Class;
struct FSharpUtils {
    struct FSharpUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FSharpUtils_FWDDECL)
#define IL2CPP_STRUCT_FSharpUtils_FWDDECL
#include <Modloader/app/structs/FSharpUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_FSharpUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_FSharpUtils_DEFINED) && !defined(IL2CPP_STRUCT_FSharpUtils_FWDDECL)
#include <Modloader/app/structs/FSharpUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FSharpUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
