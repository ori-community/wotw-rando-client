#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoolingPrewarmOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoolingPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolingPrewarmOperation_DEFINED)
#include <Modloader/app/structs/PoolingPrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_PoolingPrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_PoolingPrewarmOperation_DEFINED
struct PoolingPrewarmOperation__Class;
struct PoolingPrewarmOperation {
    struct PoolingPrewarmOperation__Class* klass;
    MonitorData* monitor;
    struct PoolingPrewarmOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoolingPrewarmOperation_FWDDECL)
#define IL2CPP_STRUCT_PoolingPrewarmOperation_FWDDECL
#include <Modloader/app/structs/PoolingPrewarmOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_PoolingPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolingPrewarmOperation_DEFINED) && !defined(IL2CPP_STRUCT_PoolingPrewarmOperation_FWDDECL)
#include <Modloader/app/structs/PoolingPrewarmOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoolingPrewarmOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
