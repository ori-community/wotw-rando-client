#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoolingPrewarmInstancesOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoolingPrewarmInstancesOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolingPrewarmInstancesOperation_DEFINED)
#include <Modloader/app/structs/PoolingPrewarmInstancesOperation__Fields.h>
#if defined(IL2CPP_STRUCT_PoolingPrewarmInstancesOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_PoolingPrewarmInstancesOperation_DEFINED
struct PoolingPrewarmInstancesOperation__Class;
struct PoolingPrewarmInstancesOperation {
    struct PoolingPrewarmInstancesOperation__Class* klass;
    MonitorData* monitor;
    struct PoolingPrewarmInstancesOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoolingPrewarmInstancesOperation_FWDDECL)
#define IL2CPP_STRUCT_PoolingPrewarmInstancesOperation_FWDDECL
#include <Modloader/app/structs/PoolingPrewarmInstancesOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_PoolingPrewarmInstancesOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolingPrewarmInstancesOperation_DEFINED) && !defined(IL2CPP_STRUCT_PoolingPrewarmInstancesOperation_FWDDECL)
#include <Modloader/app/structs/PoolingPrewarmInstancesOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoolingPrewarmInstancesOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
