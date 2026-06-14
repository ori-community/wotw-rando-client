#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BasePrewarmOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BasePrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_BasePrewarmOperation_DEFINED)
#include <Modloader/app/structs/BasePrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_BasePrewarmOperation_DEFINED
struct BasePrewarmOperation__Class;
struct BasePrewarmOperation {
    struct BasePrewarmOperation__Class* klass;
    MonitorData* monitor;
    struct BasePrewarmOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BasePrewarmOperation_FWDDECL)
#define IL2CPP_STRUCT_BasePrewarmOperation_FWDDECL
#include <Modloader/app/structs/BasePrewarmOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_BasePrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_BasePrewarmOperation_DEFINED) && !defined(IL2CPP_STRUCT_BasePrewarmOperation_FWDDECL)
#include <Modloader/app/structs/BasePrewarmOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BasePrewarmOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
