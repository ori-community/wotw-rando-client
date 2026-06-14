#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenBinding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenBinding_DEFINED)
#define IL2CPP_STRUCT_TokenBinding_DEFINED
struct TokenBinding__Class;
struct TokenBinding {
    struct TokenBinding__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TokenBinding_FWDDECL)
#define IL2CPP_STRUCT_TokenBinding_FWDDECL
#include <Modloader/app/structs/TokenBinding__Class.h>
#endif
#undef IL2CPP_STRUCT_TokenBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenBinding_DEFINED) && !defined(IL2CPP_STRUCT_TokenBinding_FWDDECL)
#include <Modloader/app/structs/TokenBinding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenBinding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
