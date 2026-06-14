#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IL2CPPPrewarmOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IL2CPPPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_IL2CPPPrewarmOperation_DEFINED)
#include <Modloader/app/structs/IL2CPPPrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_IL2CPPPrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_IL2CPPPrewarmOperation_DEFINED
struct IL2CPPPrewarmOperation__Class;
struct IL2CPPPrewarmOperation {
    struct IL2CPPPrewarmOperation__Class* klass;
    MonitorData* monitor;
    struct IL2CPPPrewarmOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IL2CPPPrewarmOperation_FWDDECL)
#define IL2CPP_STRUCT_IL2CPPPrewarmOperation_FWDDECL
#include <Modloader/app/structs/IL2CPPPrewarmOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_IL2CPPPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_IL2CPPPrewarmOperation_DEFINED) && !defined(IL2CPP_STRUCT_IL2CPPPrewarmOperation_FWDDECL)
#include <Modloader/app/structs/IL2CPPPrewarmOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IL2CPPPrewarmOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
