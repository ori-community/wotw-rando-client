#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritSentry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritSentry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritSentry_DEFINED)
#include <Modloader/app/structs/SpiritSentry__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritSentry__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritSentry_DEFINED
struct SpiritSentry__Class;
struct SpiritSentry {
    struct SpiritSentry__Class* klass;
    MonitorData* monitor;
    struct SpiritSentry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritSentry_FWDDECL)
#define IL2CPP_STRUCT_SpiritSentry_FWDDECL
#include <Modloader/app/structs/SpiritSentry__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritSentry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritSentry_DEFINED) && !defined(IL2CPP_STRUCT_SpiritSentry_FWDDECL)
#include <Modloader/app/structs/SpiritSentry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritSentry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
