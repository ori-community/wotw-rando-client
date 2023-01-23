#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISurrogateSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISurrogateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISurrogateSelector_DEFINED)
#define IL2CPP_STRUCT_ISurrogateSelector_DEFINED
struct ISurrogateSelector__Class;
struct ISurrogateSelector {
    struct ISurrogateSelector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISurrogateSelector_FWDDECL)
#define IL2CPP_STRUCT_ISurrogateSelector_FWDDECL
#include <Modloader/app/structs/ISurrogateSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_ISurrogateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISurrogateSelector_DEFINED) && !defined(IL2CPP_STRUCT_ISurrogateSelector_FWDDECL)
#include <Modloader/app/structs/ISurrogateSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISurrogateSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
