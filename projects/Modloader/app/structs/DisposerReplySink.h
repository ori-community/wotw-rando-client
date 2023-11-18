#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisposerReplySink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisposerReplySink_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisposerReplySink_DEFINED)
#include <Modloader/app/structs/DisposerReplySink__Fields.h>
#if defined(IL2CPP_STRUCT_DisposerReplySink__Fields_DEFINED)
#define IL2CPP_STRUCT_DisposerReplySink_DEFINED
struct DisposerReplySink__Class;
struct DisposerReplySink {
    struct DisposerReplySink__Class* klass;
    MonitorData* monitor;
    struct DisposerReplySink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisposerReplySink_FWDDECL)
#define IL2CPP_STRUCT_DisposerReplySink_FWDDECL
#include <Modloader/app/structs/DisposerReplySink__Class.h>
#endif
#undef IL2CPP_STRUCT_DisposerReplySink_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisposerReplySink_DEFINED) && !defined(IL2CPP_STRUCT_DisposerReplySink_FWDDECL)
#include <Modloader/app/structs/DisposerReplySink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisposerReplySink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
