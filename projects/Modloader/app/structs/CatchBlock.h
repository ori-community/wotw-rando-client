#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatchBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatchBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatchBlock_DEFINED)
#include <Modloader/app/structs/CatchBlock__Fields.h>
#if defined(IL2CPP_STRUCT_CatchBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_CatchBlock_DEFINED
struct CatchBlock__Class;
struct CatchBlock {
    struct CatchBlock__Class* klass;
    MonitorData* monitor;
    struct CatchBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatchBlock_FWDDECL)
#define IL2CPP_STRUCT_CatchBlock_FWDDECL
#include <Modloader/app/structs/CatchBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_CatchBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatchBlock_DEFINED) && !defined(IL2CPP_STRUCT_CatchBlock_FWDDECL)
#include <Modloader/app/structs/CatchBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatchBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
