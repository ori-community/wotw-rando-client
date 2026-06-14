#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPrewarmOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPrewarmOperation_DEFINED)
#define IL2CPP_STRUCT_IPrewarmOperation_DEFINED
struct IPrewarmOperation__Class;
struct IPrewarmOperation {
    struct IPrewarmOperation__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPrewarmOperation_FWDDECL)
#define IL2CPP_STRUCT_IPrewarmOperation_FWDDECL
#include <Modloader/app/structs/IPrewarmOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_IPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPrewarmOperation_DEFINED) && !defined(IL2CPP_STRUCT_IPrewarmOperation_FWDDECL)
#include <Modloader/app/structs/IPrewarmOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPrewarmOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
