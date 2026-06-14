#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogicalCallContext_Reader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogicalCallContext_Reader_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogicalCallContext_Reader_DEFINED)
#define IL2CPP_STRUCT_LogicalCallContext_Reader_DEFINED
struct LogicalCallContext;
struct LogicalCallContext_Reader {
    struct LogicalCallContext* m_ctx;
};
#endif
#if !defined(IL2CPP_STRUCT_LogicalCallContext_Reader_FWDDECL)
#define IL2CPP_STRUCT_LogicalCallContext_Reader_FWDDECL
#include <Modloader/app/structs/LogicalCallContext.h>
#endif
#undef IL2CPP_STRUCT_LogicalCallContext_Reader_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogicalCallContext_Reader_DEFINED) && !defined(IL2CPP_STRUCT_LogicalCallContext_Reader_FWDDECL)
#include <Modloader/app/structs/LogicalCallContext_Reader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogicalCallContext_Reader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
