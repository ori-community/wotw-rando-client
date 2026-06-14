#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgIterator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgIterator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgIterator_DEFINED)
#define IL2CPP_STRUCT_ArgIterator_DEFINED
struct ArgIterator {
    void* sig;
    void* args;
    int32_t next_arg;
    int32_t num_args;
};
#endif
#if !defined(IL2CPP_STRUCT_ArgIterator_FWDDECL)
#define IL2CPP_STRUCT_ArgIterator_FWDDECL
#endif
#undef IL2CPP_STRUCT_ArgIterator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgIterator_DEFINED) && !defined(IL2CPP_STRUCT_ArgIterator_FWDDECL)
#include <Modloader/app/structs/ArgIterator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgIterator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
