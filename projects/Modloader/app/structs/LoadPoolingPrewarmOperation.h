#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadPoolingPrewarmOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadPoolingPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadPoolingPrewarmOperation_DEFINED)
#include <Modloader/app/structs/LoadPoolingPrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_LoadPoolingPrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadPoolingPrewarmOperation_DEFINED
struct LoadPoolingPrewarmOperation__Class;
struct LoadPoolingPrewarmOperation {
    struct LoadPoolingPrewarmOperation__Class* klass;
    MonitorData* monitor;
    struct LoadPoolingPrewarmOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadPoolingPrewarmOperation_FWDDECL)
#define IL2CPP_STRUCT_LoadPoolingPrewarmOperation_FWDDECL
#include <Modloader/app/structs/LoadPoolingPrewarmOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadPoolingPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadPoolingPrewarmOperation_DEFINED) && !defined(IL2CPP_STRUCT_LoadPoolingPrewarmOperation_FWDDECL)
#include <Modloader/app/structs/LoadPoolingPrewarmOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadPoolingPrewarmOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
