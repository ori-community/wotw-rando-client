#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecutionContext_Reader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecutionContext_Reader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContext_Reader_DEFINED)
#define IL2CPP_STRUCT_ExecutionContext_Reader_DEFINED
struct ExecutionContext;
struct ExecutionContext_Reader {
    struct ExecutionContext* m_ec;
};
#endif
#if !defined(IL2CPP_STRUCT_ExecutionContext_Reader_FWDDECL)
#define IL2CPP_STRUCT_ExecutionContext_Reader_FWDDECL
#include <Modloader/app/structs/ExecutionContext.h>
#endif
#undef IL2CPP_STRUCT_ExecutionContext_Reader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContext_Reader_DEFINED) && !defined(IL2CPP_STRUCT_ExecutionContext_Reader_FWDDECL)
#include <Modloader/app/structs/ExecutionContext_Reader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecutionContext_Reader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
