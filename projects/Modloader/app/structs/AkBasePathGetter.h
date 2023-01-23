#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkBasePathGetter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkBasePathGetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBasePathGetter_DEFINED)
#define IL2CPP_STRUCT_AkBasePathGetter_DEFINED
struct AkBasePathGetter__Class;
struct AkBasePathGetter {
    struct AkBasePathGetter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AkBasePathGetter_FWDDECL)
#define IL2CPP_STRUCT_AkBasePathGetter_FWDDECL
#include <Modloader/app/structs/AkBasePathGetter__Class.h>
#endif
#undef IL2CPP_STRUCT_AkBasePathGetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBasePathGetter_DEFINED) && !defined(IL2CPP_STRUCT_AkBasePathGetter_FWDDECL)
#include <Modloader/app/structs/AkBasePathGetter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkBasePathGetter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
