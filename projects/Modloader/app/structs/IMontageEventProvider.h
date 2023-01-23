#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMontageEventProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMontageEventProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMontageEventProvider_DEFINED)
#define IL2CPP_STRUCT_IMontageEventProvider_DEFINED
struct IMontageEventProvider__Class;
struct IMontageEventProvider {
    struct IMontageEventProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMontageEventProvider_FWDDECL)
#define IL2CPP_STRUCT_IMontageEventProvider_FWDDECL
#include <Modloader/app/structs/IMontageEventProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IMontageEventProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMontageEventProvider_DEFINED) && !defined(IL2CPP_STRUCT_IMontageEventProvider_FWDDECL)
#include <Modloader/app/structs/IMontageEventProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMontageEventProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
