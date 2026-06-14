#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_DEFINED)
#define IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_DEFINED
struct ISurrogateSelector;
struct __declspec(align(8)) RemotingSurrogateSelector__Fields {
    struct ISurrogateSelector* _next;
};
#endif
#if !defined(IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_FWDDECL)
#define IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_FWDDECL
#include <Modloader/app/structs/ISurrogateSelector.h>
#endif
#undef IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_FWDDECL)
#include <Modloader/app/structs/RemotingSurrogateSelector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingSurrogateSelector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
