#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourcesLoadPrewarmOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourcesLoadPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourcesLoadPrewarmOperation_DEFINED)
#include <Modloader/app/structs/ResourcesLoadPrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_ResourcesLoadPrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourcesLoadPrewarmOperation_DEFINED
struct ResourcesLoadPrewarmOperation__Class;
struct ResourcesLoadPrewarmOperation {
    struct ResourcesLoadPrewarmOperation__Class* klass;
    MonitorData* monitor;
    struct ResourcesLoadPrewarmOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourcesLoadPrewarmOperation_FWDDECL)
#define IL2CPP_STRUCT_ResourcesLoadPrewarmOperation_FWDDECL
#include <Modloader/app/structs/ResourcesLoadPrewarmOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourcesLoadPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourcesLoadPrewarmOperation_DEFINED) && !defined(IL2CPP_STRUCT_ResourcesLoadPrewarmOperation_FWDDECL)
#include <Modloader/app/structs/ResourcesLoadPrewarmOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourcesLoadPrewarmOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
